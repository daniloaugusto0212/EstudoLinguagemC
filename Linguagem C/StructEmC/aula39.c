#include <stdio.h>

int main (void){

    struct horario //Horario é o tipo da estrutura
    {
        int horas;
        int minutos;
        int segundos;
        
    };

    struct horario agora; //Agora é o nome da estrutura de tipo horário

    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;

    printf("%i:%i:%i\n", agora.horas,agora.minutos,agora.segundos);    
    


    return 0;
}