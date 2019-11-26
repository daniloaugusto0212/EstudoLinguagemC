#include <stdio.h>
#include <stdlib.h>



int main(){
    int **matriz, linha = 4, coluna = 3, i ,j;
    matriz = (int **) malloc(sizeof(int)*linha);
    for ( i = 0; i < linha; i++)
    {
        matriz[i] = (int *) malloc(sizeof(int)*coluna);

    }
    for ( i = 0; i < linha; i++)
    {
        for ( j = 0; j < coluna; j++)
        {
            matriz[i][j] = i*10+j;
        }
    for ( i = 0; i < linha ; i++)
    {
        for ( j = 0; j < coluna; j++)
        {
            printf("%d", matriz[i][j]);
        printf("\n");
        }
        
    }
    
        
    }
    
        

  
    return 0;
}