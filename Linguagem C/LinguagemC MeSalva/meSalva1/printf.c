#include <stdio.h>


int x;

 

void funcaoTeste( )

  {

    int a;

    a = x;

    printf("Valor de 'a': %d\n",a);

    x++;

  }

 

int main( )

  {

    x = 0;

    funcaoTeste();

    printf("Valor de 'x': %d\n",x);
    int tot = printf("Ola %d\n", 300);
    printf("Valor = %-5d\n", 30); //com o sinal de menos, alinha a esquerda
    printf("Valor = %5d\n", 300);//sem o sinal de menos, alinha a direita
    printf("Valor = %-5d\n", 3000);
    
    printf("a=[%5d]\n", 3); //completa 5 casas decimais com espaços vazios a esquerda do 3
    printf("a=[%-5d]\n", 3); //completa 5 casas decimais com espaços vazios a direita do 3

    printf("a = %05d\n", 3); //completa 5 casas decimais com valor 0 a esquerda do 3
    printf("a = %05d\n", 30);
    printf("a = %05d\n", 300);

    
  }