
#include <stdio.h>
//#include <conio.h>



int main(void){
    //Criando a variável ponteiro para o arquivo
    FILE *pont_arq;

    //variável do tipo string
    char palavra[20];

    //Abrindo o arquivo com tipo de abertura w
    pont_arq = fopen("arquivo_palavra.txt", "a");//"w" cria o novo arquivo ou se ele existir sobrescreve o que está no arquivo "a" adiciona texto ao arquivo

    //testando se realmente o arquivo foi criado
    if (pont_arq == NULL)
    {
        printf("Erro na abertura do arquivo!");
        return 1;
    }

    printf("Escreva uma palavra para testar gravação de arquivo: ");
    scanf("%s", palavra);

    //usando fprintf para armazenar a string no arquivo
    fprintf(pont_arq, "%s ", palavra);

    //usando fclose para fechar o arquivo
    fclose(pont_arq);

    printf("Dados gravados com sucesso!");

    //getch();

    system("pause");
    return 0;
}
