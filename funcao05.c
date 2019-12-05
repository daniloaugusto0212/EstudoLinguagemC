#include <stdio.h>
#include <stdlib.h>

void imprimir(){
    printf("Hello, world!\n");
}

int main(int argc, char *argv[]){

    int i = 0;
    for (i = 0; i < 5; i++)
        imprimir();

    return 0;
}
