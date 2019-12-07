#include <stdio.h>

int main (void){

    int x = 10;
    int *ponteiro;
    ponteiro = &x;

    int y = 20;
    *ponteiro = y;

    printf("%i %i\n", x, y);

    getchar(); //pausa em qualquer sistema operacional
    //system("pause");//Usado somente para o windows para pausar o DOS.
    return 0;
}