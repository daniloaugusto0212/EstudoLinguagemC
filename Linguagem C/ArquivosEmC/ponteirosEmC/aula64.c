#include <stdio.h>

int main (void){
   
   struct horario
   {
       int hora, minuto, segundo;
   };
   
   struct horario agora, *depois;
   depois = &agora;

    depois->hora = 20;
    depois->minuto = 80;
    depois->segundo = 50;

    int somatorio = 100;

    struct horario antes;    

    antes.hora = somatorio + depois->segundo;
    antes.minuto = agora.hora + depois->minuto;
    antes.segundo = depois->minuto + depois->segundo;
   

    printf("%i:%i:%i", antes.hora, antes.minuto, antes.segundo);

    getchar(); //pausa em qualquer sistema operacional
    //system("pause");//Usado somente para o windows para pausar o DOS.
    return 0;
}