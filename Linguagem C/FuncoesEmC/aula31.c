#include <stdio.h>

int main(void){
    void teste(void);
    teste();
    teste();
    teste();


    return 0;
}

void teste (void){
    int variavelLocalautomatica = 2; //Se inicia a cada passagem
    variavelLocalautomatica *= 2;


    static int variavelLocalEstatica = 2; //A cada passagem acumula com o valor anterior
    variavelLocalEstatica *= 2;

    printf("Local automática = %i\n", variavelLocalautomatica);
    printf("Local estática = %i\n", variavelLocalEstatica);

}

