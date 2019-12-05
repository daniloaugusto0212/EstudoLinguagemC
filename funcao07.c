#include <stdio.h>
#include <stdlib.h>

void naoRetorna(){ //procidure (Função que não retorna valor)
    printf("Hello, world.\n");
}
int retorna(){// function (Função que retorna valor)
    return 5;

}

int main(int argc, char *argv[]){
    naoRetorna();
    int g = retorna();
    printf("%d\n", g);
   
    

    return 0;
}
