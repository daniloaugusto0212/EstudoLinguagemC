#include <stdio.h>

int GravaDados(int vi, float vf, FILE *arq){
    if (!fwrite(&vi, sizeof(int), 1, arq))
        return -1;
    if (!fwrite(&vf, sizeof(float), 1, arq))
        return -1;
    return 0;
}

int main(){
    FILE *arq;
    int qtd = 2, valor_int, i;
    float valor_float;
    arq = fopen("exemplobinario.dat", "wb+");
    if(arq == NULL){
        printf("Erro de abertura de arquivo.\n");
        return 0;
    }
    //Gravando dados
    fwrite(&qtd, sizeof(int), 1, arq); //qtd de iten a serem gravados
    GravaDados(23, 45.9, arq);
    GravaDados(1256, 568.987, arq);

    //Recuperando dados para testar
    rewind(arq);
    fread(&qtd, sizeof(int), 1, arq);
    for ( i = 0; i < qtd; i++)
    {
        fread(&valor_int, sizeof(int), 1, arq);
        fread(&valor_float, sizeof(float), 1, arq);
        printf("Registro        [%d]:       int = %d        float = %f\n", i, valor_int, valor_float);
        

    }
    fclose(arq);
    return 0;
    

}