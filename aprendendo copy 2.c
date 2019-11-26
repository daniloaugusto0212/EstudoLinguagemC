#include <stdio.h>
#include <stdlib.h>

int main(){
    int **vet=NULL;
    vet = (int **)malloc(sizeof(int *)*3);
    for (int i = 0; i < 3; i++)
    {
        vet[i] = (int *)malloc(sizeof(int)*3);
    }
    vet[2][2]= 35;
    printf("\n%d", vet[2][2]);
    
    
    
return 0;
}