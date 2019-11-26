#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *file;
    file = fopen("enunciado.txt", "r");//"r" lê o arquivo

    if (file == NULL)
    {
        printf("Não foi possível abrir o arquivo.\n");
        getchar();
        exit(0);
    }
    char frase[100];

    while (fgets(frase, 100, file) != NULL) ////Lê o arquivo "file" em formato caractere até o final e adiciona na variável frase
    {
        printf("%s", frase); //Mostra o que está no arquivo
    }

    fclose(file);
    


    printf("\n");
    //system("pause");
    return 0;
    
}