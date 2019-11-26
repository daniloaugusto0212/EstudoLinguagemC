//Programa para cálculo de média de 8 notas fornecidas pelo usuário
//Usando Vetor

#include <stdio.h>

int main()
{
    float notas[8], media = 0;
    int indice;

    for (indice = 0; indice < 8; indice++)
    {
        printf("Nota %d: ",indice+1);
        scanf("%f",&notas[indice]);
    }

    for (indice = 0; indice < 8; indice++) 

    media += notas[indice];
    media = media / 8;
printf("Media final: %.2f. \n",media);
return 0;    
    
}