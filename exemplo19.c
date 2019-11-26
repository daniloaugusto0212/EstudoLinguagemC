#include <stdio.h>

int main(){
    FILE *arq;
    char carac = 'a', str[20] = "Apenas um teste";
    int valor = 54778;
    arq = fopen("exemplo1.txt", "w");
    if (arq == NULL)
    {
        printf("Erro de abertura do arquivo.\n");
        return 0;
    }
    fprintf(arq, "%c %d %s\n", carac, valor, str);
    fclose(arq);
    return 0;
    
}