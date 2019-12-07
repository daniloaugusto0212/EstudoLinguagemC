#include <stdio.h>

int main (void){
    
    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *px = &x;
    double *py = &y;
    char *pz = &z;

   

    printf("Endereço X = %i e Valor X = %i\n", px, *px);
    printf("Endereço Y = %i e Valor Y = %i\n", py, *py);
    printf("Endereço Z = %i e Valor Z = %c\n", pz, *pz);

    double soma = *px + *py;

    printf("Valor x = %f\n", soma);

    int *resultado = &x;

    printf("Valor x = %i\n", resultado);
    
    getchar(); //pausa em qualquer sistema operacional
    //system("pause");//Usado somente para o windows para pausar o DOS.
    return 0;
}