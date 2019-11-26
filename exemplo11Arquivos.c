#include <stdio.h>

int main(void){

    FILE *file;
    char nome[20];
    printf("Digite o nome do arquivo que deseja abrir: ");
    scanf("%s", nome); //Digitar o nome.txt
    file = fopen(nome, "r");//função que faz o ponteiro apontar para um arquivo no programa
    // "r" lê o arquivo

    if (file == NULL) //Verifica se o arquivo existe
    {
        printf("O arquivo digitado não existe!\n");
        return 0;
    }
    
    
    char c[1000];
    fscanf(file, "%s", c);  

    printf("%s\n", c); 
    fclose(file);
    

    return 0;
}