#include <stdio.h>

int main(void){
    void teste(void);
    teste();


    return 0;
}

void teste (void){
    int variavel = 2; //variável local
    variavel *= 2;

    printf("%i\n", variavel);

}