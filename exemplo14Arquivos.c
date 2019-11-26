#include <stdio.h>


int main(){

    void copiarConteudo(FILE *file1, FILE *file2);

    FILE *file1;
    file1 = fopen("/home/o1234/arquivo.txt", "r"); //Se o arquivo estiver na mesma pasta do programa, basta colocar o nome dele

    if (file1 == NULL)
    {
        printf("Não foi possível abrir o arquivo!");
        return 1;
    }

    FILE *file2 = fopen("/home/o1234/arquivo2.txt", "w");
    

    copiarConteudo(file1, file2);
    printf("Conteúdo copiado com sucesso!\n");

    fclose(file1);
    fclose(file2);

    return 0;
}

void copiarConteudo(FILE *file1, FILE *file2){

    char leitor[1000];
    
    while (fgets(leitor, 1000, file1) != NULL)
    
    fputs(leitor, file2);
    


}