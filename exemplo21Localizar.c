#include <stdio.h>
#include <string.h>

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
int main(){
    FILE *arq;
    tPessoa pessoa;
    long pos;
    char cpf[12];

    arq = fopen("registros.odt", "r");
    if(arq == NULL){
        printf("Erro de abertura de arquivo.\n");
        return 0;
    }    
    printf("CPF a ser localizad: ");
    scanf("%s", cpf);
    pos = localizaRegistro(cpf, &pessoa, arq);
    if(pos == -1){
        printf("Registro não encontrado.\n");
    }else{
        printf("Encontrado posição = %ld\tCPF = %s\tIdade = %d", pos, pessoa.cpf, pessoa.idade);
    }
    fclose(arq);
    return 0;   
   
}
