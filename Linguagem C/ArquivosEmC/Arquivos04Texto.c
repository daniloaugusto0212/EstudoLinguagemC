#include <stdlib.h>
#include <stdio.h>



int main(){
   
    FILE *parq;   
   
    parq = fopen("arquivo02.txt", "a+");

    char teclado[50];
    printf("Digite algo: ");
    scanf("%s", teclado);

    fprintf(parq, "\n%s", teclado);

    printf("Conteúdo armazenado com sucesso!\n");




    fclose(parq);
    getchar();
    return 0;

}