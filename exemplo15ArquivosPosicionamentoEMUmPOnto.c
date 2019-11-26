#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *arq;
    long pos = 1;
    int ret;
    
    arq = fopen("arquivo.txt", "a"); //'a' abreo o arquivo

    if (arq == NULL)
    {
        printf("Não foi possível abrir o arquivo.\n");
        getchar();
        exit(1);
    }

    ret = fseek(arq, pos, SEEK_SET); // podemos usar para posicionamento inicial, também a função "rewind(arq)"

    if (ret != 0)
    {
        printf("Erro de posicionamento.\n");
    }else
    {
        printf("Ponteiro posicionado na posição inicial!\n");
    }
    
    fclose(arq);
    
    //system("pause");
    return 0;
    
}