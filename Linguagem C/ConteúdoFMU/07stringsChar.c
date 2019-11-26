#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char nome[20], texto[20] = "O nome é ";
    int tam;

    printf("Digite um nome: ");
    scanf("%s", nome);
    strcat(texto, nome); //concatena as strings referenciadas e armazena na primeira "texto"
    printf("%s\n", texto);


    char texto2[20] = "O nome é ";

    strncat(texto2, nome, 5); //concatena as strings referenciadas e armazena na primeira "texto" pegando somente as 5 primeiras letras da variável "nome"
    printf("%s\n", texto2);

    strcpy(texto2, nome); //Copia o conteúdo da variável nome para avariável texto
    strncpy(texto2, nome, 5); //Copia somente os 5 primeiros carcteres da varável nome para a variável texto2

    //strcmp(texto2, nome); //Compara se as strings são iguais

    char texto3[5];
    int valor;

   // atoi(texto); //converte string para número
    //itoa(valor, texto3, 10); //Converte número para string



    tam = strlen(texto); //Mostra o tamanho da string referenciada em int
    printf("\nTamanho: %d\n", tam);
   
}

