#include <stdio.h>

int main (void){
   
   struct horario
   {
       int hora, minuto, segundo;
   };
   
   struct horario agora, *depois;
   depois = &agora;

    depois->hora = 20;
    depois->minuto = 20;
    depois->segundo = 20;
   

    printf("%i:%i:%i", agora.hora, agora.minuto,agora.segundo);
    getchar(); //pausa em qualquer sistema operacional
    //system("pause");//Usado somente para o windows para pausar o DOS.
    return 0;
}