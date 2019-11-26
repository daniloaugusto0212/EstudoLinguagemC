#include <stdio.h>

int main (void){

    struct horario
    {
        int horas, minutos, segundos;
        
    }agora = {10, 20, 30}; //Essa linha tem o mesmo significado do código comentado abaixo
    
    
    /*struct horario agora;
    agora.horas = 10;
    agora.minutos = 20;
    agora.segundos = 30; */

    printf("%i:%i:%i\n",agora.horas,agora.minutos,agora.segundos );   


    return 0;
}