#include <stdio.h>

int main(){
    int a = 10;  //varialvel normal
    int *b;     //variavel do tipo ponteiro para int
    b = &a;
    printf("Valor de 'b' modificado para %d\n",*b);
    return 0;
}