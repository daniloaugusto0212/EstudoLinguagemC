#include <stdio.h>
#include <stdlib.h>

void imprimir(int a){
    int d = 0;
    for ( d = 0; d < a; d++)
    {
        printf("Oi    %d\n", d);
    }    
}
int soma(int a, int b){
    return a + b;
}

int main(int argc, char *argv[]){
    imprimir(5);
    int x = soma(5, 3);
    printf("soma: %d \n", x);
    
    

    return 0;
}
