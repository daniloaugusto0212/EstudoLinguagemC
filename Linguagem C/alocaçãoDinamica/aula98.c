#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p = (int *)calloc(5, sizeof(int));  

    int i;
    for (size_t i = 0; i < 5; i++)
    {
        printf("Endereço de p%i = %p | Valor de p%i = %i\n", i, (p + i), i, *(p + i)); 
    }
     
    


    printf("%i\n", *p);
    
}