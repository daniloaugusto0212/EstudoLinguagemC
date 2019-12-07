#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *parq;

    parq = fopen("arquivo01.txt", "w");

    if (parq == NULL){
        printf("Erro ao criar o arquivo");
        return 0;
    }

    fclose(parq);
    getchar();
    return 0;
}