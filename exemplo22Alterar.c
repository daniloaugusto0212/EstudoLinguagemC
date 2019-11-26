#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct 
{
    char cpf[12];
    int idade;
}tPessoa;

long localizaRegistro(char cpf[12], tPessoa *pessoa, FILE *arq){
    long pos;
    rewind(arq);
    while (1)
    {
        pos = ftell(arq);
        fread(pessoa,sizeof(tPessoa), 1, arq);
        if(feof(arq))
            break;
        if(!strcmp(pessoa->cpf, cpf))
            return pos;
    }
    return -1; //não encontrado
    
}  
int alteraRegistro(long pos, tPessoa pessoa, FILE *arq){
    fseek(arq, pos, SEEK_SET);
    if(!fwrite(&pessoa, sizeof(tPessoa), 1, arq))
        return - 1; //erro de escrita    
    return 0;
}    

int main(){
    FILE *arq;
    tPessoa pessoa;
    long pos;
    char cpf[12], resp;
    int ret;

    arq = fopen("registros.odt", "r+");
    if(arq == NULL){
        printf("Erro de abertura de arquivo.\n");
        return 0;
    }    
    printf("CPF a ser alterado: ");
    scanf("%s", cpf);
    pos = localizaRegistro(cpf, &pessoa, arq);
    if(pos == -1){
        printf("Registro não encontrado.\n");
        return 0;
    }else{
        printf("CPF = %s\tIdade = %d\n", pessoa.cpf , pessoa.idade);
    }
    do
    {
        printf("Manter a idade [S][N]?\n");
        scanf("%c", &resp);
        resp = toupper(resp);
    } while ((resp != 'S') && (resp != 'N')); 
    if (resp == 'N')
    {
        printf("Digite nova idade: ");
        scanf("%d", &pessoa.idade);
        ret = alteraRegistro(pos, pessoa, arq);
        if (ret == -1)
            printf("Erro de atualização do registro.\n");
    }
    printf("Testando alteração...\n");
    fseek(arq, pos, SEEK_SET);
    fread(&pessoa, sizeof(tPessoa), 1, arq);
    printf("CPF = %s\tIdade = %d\n", pessoa.cpf, pessoa.idade);     
    
    fclose(arq);
    return 0;   
   
}
