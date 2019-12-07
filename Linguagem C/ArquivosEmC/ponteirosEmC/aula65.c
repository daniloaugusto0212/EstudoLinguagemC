#include <stdio.h>

int main (void){
   
    struct horario
    {
        int *pHora, *pMinuto, *pSegundo;
    };
    
    struct horario hoje;

    int hora = 20, minuto = 30, segundo = 40;

    hoje.pHora = &hora;
    hoje.pMinuto = &minuto;
    hoje.pSegundo = &segundo;

    printf("Hora - %i\n", *hoje.pHora);
    printf("Minuto - %i\n", *hoje.pMinuto);
    printf("Segundo - %i\n", *hoje.pSegundo);
    

    *hoje.pSegundo = 1000;

    printf("Segundo - %i\n", *hoje.pSegundo);
    
    getchar(); //pausa em qualquer sistema operacional
    //system("pause");//Usado somente para o windows para pausar o DOS.
    return 0;
}