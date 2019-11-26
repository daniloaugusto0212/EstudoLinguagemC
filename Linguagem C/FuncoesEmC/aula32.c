#include <stdio.h>

int gVariavelGlobal = 2; //Variável global pode ser usada em qualquer parte do programa

int main(void){
    void teste(void);

    printf("Global = %i\n", gVariavelGlobal);
    
    teste();
    teste();


    return 0;
}

void teste (void){
    int variavelLocalautomatica = 2; //Se inicia a cada passagem
    variavelLocalautomatica *= 2;


    static int variavelLocalEstatica = 2; //A cada passagem acumula com o valor anterior
    variavelLocalEstatica *= 2;

    gVariavelGlobal *= 2; //Altera o valor da variável global

    printf("Local automática = %i\n", variavelLocalautomatica);
    printf("Local estática = %i\n", variavelLocalEstatica);
    printf("Global = %i\n", gVariavelGlobal);

}