#include <stdio.h>
#include <string.h>

typedef struct 
{
    char cpf[12];
    int idade;
}tPessoa;

int incluirRegistro(char cpf[12], int idade, FILE *arq){
    tPessoa pessoa;
    char c[12];
    int i;
    printf("Digite o CPF: ");
    scanf("%s", &c);
    printf("Digite a idade: ");
    scanf("%i", &i);
    
    strcpy(pessoa.cpf, c);
    pessoa.idade = i;
    if (!fwrite(&pessoa, sizeof(tPessoa),1,arq))
        return -1;
    return 0;
}
int main(){
    FILE *arq;
    tPessoa pessoa;

    arq = fopen("registros.odt", "w+");
    if(arq == NULL){
        printf("Erro de abertura de arquivo.\n");
        return 0;
    }
    if(incluirRegistro("12345678901", 30, arq) == -1){
        printf("Erro de abertura do registro.\n");
    }
    if(incluirRegistro("45612378902", 40, arq) == 1){
        printf("Erro na gravação do registro.\n");
    }
}
