#include <stdio.h>

int main (void){

    char linha[100];
    char caractere;
    int i = 0;

    do
    {
        caractere = getchar();
        linha[i] = caractere;
        i++;
    } while (caractere != '\n'); //('\n')é o caractere adiciona ao usuário digitar enter

    linha[i - 1] = '\0';

    printf("%s\n", linha);
    
    


    return 0;
}