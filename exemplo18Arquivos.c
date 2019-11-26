#include <stdio.h>

int main(){

    FILE *arq;
    char palavra[10];
    arq = fopen("teste.txt", "a+");
    if (arq == NULL)
    {
        printf("Erro de abertura de arquivp.\n");
        return 0;
    }
    printf("Palavra a ser gravada no arquivo: ");
    scanf("%s", palavra);
    fprintf(arq, "%s", palavra);
    if (ferror(arq)) //Verifica se há erro
    {
        printf("Erro na gravação.\n");
    }
    fclose(arq);
    return 0;    
    
}