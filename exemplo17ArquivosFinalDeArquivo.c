#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *arq;
    char carac;
    
    arq = fopen("arquivo.txt", "r"); //'r' abre o arquivo no modo leitura 'w' abre um novo arquivo para escrita, caso o arquivo já exista, ele será sobrescrito 'a' o arquivo é aberto se já existir, caso naõ exista ele é criado e o ponteiro é posicionado no final do arquivo para adicionar outros registros

    if (arq == NULL)
    {
        printf("Não foi possível abrir o arquivo.\n");
        getchar();
        exit(1);
    }
    while (!feof(arq))
    {
        carac = fgetc(arq);
        printf("%c", carac);
    }
     
    
    fclose(arq);
    
    //system("pause");
    return 0;
    
}