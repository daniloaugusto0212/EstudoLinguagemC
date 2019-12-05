#include <stdio.h>
#include <stdlib.h>

void imprimir(){
    printf("Hello, world.");
}
int soma(int a){

    return a + 1;
}


int main(int argc, char *argv[]){
    imprimir();
    printf("\nValor: %d\n", soma(4));

    

    return 0;
}
