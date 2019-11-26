#include <stdio.h>

int main (void){

    struct horario
    {
        int hora,minuto,segundo;
    }vetor[5] = {{10,20,30},{12,20,30},{10,22,30},{10,20,32},{12,20,30} };
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("%i:%i:%i\n", vetor[i].hora,vetor[i].minuto,vetor[i].segundo);
    }
    
    
    


    return 0;
}