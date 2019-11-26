#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float exponenciacao(float x,int y){
    int i;
    float resultado = 1;
        for ( i = 1; i <= y; i++)
        {
            resultado *= x;
            
        }
        return resultado;
}
int main (void){
    int a, b;
    printf("Digite dois valores: ");
    scanf("%i", &a);
    scanf("%i", &b);

    printf("Resultado da expenenciação: %.2f", exponenciacao(a,b));

    
    getchar(); //pausa em qualquer sistema operacional
    //system("pause");//Usado somente para o windows para pausar o DOS.
    return 0;
}