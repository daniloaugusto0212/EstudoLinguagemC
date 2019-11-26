#include <stdio.h>

int main(void){

    FILE *file;
    file = fopen("string.txt", "w");//função que faz o ponteiro apontar para um arquivo no programa
    //"w" cria um novo arquivo sendo aberto para escrita. Caso o arquivo já exista ele é destruido e aberto um novo vazio
    //
    
    fprintf(file, "Danilo Augusto"); //Escreve "Danilo Augusto" no arquivo que está dentro do ponteiro file
    fclose(file);
    

    return 0;
}