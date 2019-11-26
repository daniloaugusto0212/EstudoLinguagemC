#include <stdio.h>

int main (void){
    int x = 16;
    int y = 3;
    float resultado;
    resultado = (float)x / y;
    printf("%f\n", resultado);

    /*Em linguagem C quando temos duas variaveis inteiras em uma divisão,
    automaticamente o resultado, mesmo sendo float, é arredondado.
    Para isso usamos o Casting (colocamos um "(float)" na frente do divisor)
    Casting pode ser usado com qualquer tipo de variável, alterando o  seu tipo*/
    


    return 0;
}