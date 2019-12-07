#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
    int vetor[5];
    int i,cont;

    for ( i = 0; i < 5; i++)
    {
        printf("Digite o %iº número:", i + 1);
        scanf("%i", &vetor[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        if (vetor[i] > 100)
        {
            cont++;
        }
        
    }
    printf("Existem %i números maiores que 100.\n", cont);
    

    
    getchar(); //pausa em qualquer sistema operacional
    //system("pause");//Usado somente para o windows para pausar o DOS.
    return 0;
}