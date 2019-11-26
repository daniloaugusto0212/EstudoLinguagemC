#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *file;
    file = fopen("string.txt", "a"); //'a' abreo o arquivo

    if (file == NULL)
    {
        printf("Não foi possível abrir o arquivo.\n");
        getchar();
        exit(1);
    }

    fprintf(file, "Segunda linha\n"); //Adiciona o texto ao arquivo 'file'

   /* char frase[1000];
    printf("Digite a frase que deseja escrever no documento: "); 
    scanf("%s\n", frase); //Adiciona texto digitado pelo usuário
    fputs(frase, file);*/ //não pode ser usada com a função abaixo

    char caractere = '3';
    fputc(caractere, file);


    fclose(file);
    
    //system("pause");
    return 0;
    
}