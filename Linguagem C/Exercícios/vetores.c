#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
    int vetorA[6], vetorB[6];
    int i,cont;

    for ( i = 0; i < 6; i++)
    {
        printf("Digite o %iº número:", i + 1);
        scanf("%i", &vetorA[i]);
    }
    for ( i = 0; i < 6; i++)
    {
        vetorB[i] = vetorA[i] * vetorA[i];
       
        
    }
    printf("Vetor A {");
    for ( i = 0; i < 6; i++)
    {
        printf("%3d ",vetorA[i]);
    }
    printf(" }\n");
    printf("Vetor B {");
    for ( i = 0; i < 6; i++)
    {
        printf("%3d ",vetorB[i]);
    }
    printf(" }\n");
    
    
    

    
    getchar(); //pausa em qualquer sistema operacional
    //system("pause");//Usado somente para o windows para pausar o DOS.
    return 0;
}