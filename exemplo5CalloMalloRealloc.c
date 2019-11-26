#include <stdio.h>
#include <stdlib.h>

int main(){

    int *vetor;
    char *str;
    int NumCelulas = 5, TamanhoStr = 10;

    //alocando espaço para vetor e para a string
    vetor = (int *) malloc(NumCelulas * sizeof(int));
    str = (char *) calloc(TamanhoStr, sizeof(char));

    //realocando espaço para o vetor - aumentando o vetor em 5 posições
    vetor = realloc(vetor,(NumCelulas+5)*sizeof(int));

    //liberando os espaços previamente alocados
    free(vetor);
    free(str);

   
    return 0;
}