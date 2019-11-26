#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
    
    float matriz [4][4], somaColImpar = 0, somaColPar = 0, media;
    int lin, col, contColPar = 0;
    
    for ( lin = 0; lin < 4; lin++)
    {
        for ( col = 0; col < 4; col++)
        {
            printf("Digite um valor para [%i] [%i]", lin, col);
            scanf("%f", &matriz[lin][col]);
        }
        
    }
    for ( lin = 0; lin < 4; lin++)
    {
        for ( col = 0; col < 4; col++)
        {
            if (col % 2 == 1)
            {
                somaColImpar += matriz[lin][col];
            }else
            {
                somaColPar += matriz[lin][col];
                contColPar++;
                
            }          
            
            
        }
        
    }
    media = somaColPar / contColPar;
    printf("A soma dos elementos das colunas Ímpares é %f\n", somaColImpar);
    printf("A média entre os elementos das colunas pares é %f\n", media);
    printf("%i", contColPar);
    

    
   
    
}