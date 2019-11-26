#include <stdio.h>
#include <stdlib.h>

void linha()    //função void "linha sem parametro"
{
    int i;
    for ( i = 0; i <=25; i++)
        printf("*");
    printf("\n");    
       
}

int main()
{
    int i;
    linha(); //chamad da função
    printf("Números de 1 a 10: \n");
    for ( i = 0; i <= 10; i++)    
        printf("%d ", i);
    printf("\n");
    linha(); //chamad da função

    



    return 0;
}
