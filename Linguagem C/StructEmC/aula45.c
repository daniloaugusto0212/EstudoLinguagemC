#include <stdio.h>

struct horario
{
    int hora,minuto,segundo;
};


int main (void){

    void recebeHorarios(struct horario lista[5]);
    void mostraHorarios(struct horario lista[5]);
    struct horario listaHorarios[5];
    recebeHorarios(listaHorarios);
    mostraHorarios(listaHorarios);
    system('pause');
    return 0;
}
void recebeHorarios(struct horario lista[5]){
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("Digite o %iº horário (hh:mm:ss): ", i + 1);
        scanf("%i:%i:%i", &lista[i].hora, &lista[i].minuto, &lista[i].segundo);
    }

void mostraHorarios(struct horario lista[5]){
      int i;
    for (i = 0; i < 5; i++)
    {
        printf("%iº horário digitado: %i:%i:%i\n ",&i + 1,&lista[i].hora, &lista[i].minuto, &lista[i].segundo);

    }

}
