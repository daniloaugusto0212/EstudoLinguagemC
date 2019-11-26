#include <stdio.h>

int main (void){

    char nome[20];
    char sobrenome[20];

    printf("Insira seu nome e sobrenome: \n");
    scanf("%s %s", &nome, &sobrenome);
   
    system("clear");

    printf("%s %s\n", nome, sobrenome);
    


    return 0;
}