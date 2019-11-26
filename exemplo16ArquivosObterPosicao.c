#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *arq;
    long pos = 1;
    int ret;
    
    arq = fopen("arquivo.txt", "r"); //'a' abre o arquivo

    if (arq == NULL)
    {
        printf("Não foi possível abrir o arquivo.\n");
        getchar();
        exit(1);
    }

    printf("Posição corrente: %ld.", ftell(arq));   
    
    fclose(arq);
    
    //system("pause");
    return 0;
    
}