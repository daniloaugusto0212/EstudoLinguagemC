//Calcula e informa a soma de 2 valores

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val1, val2, soma;
    printf("Digite um valor: ");
    scanf("%d",&val1);
    printf("Digite o segundo valor: ");
    scanf("%d",&val2);

    soma = val1 + val2;

    printf("Resultado: %d",&soma);

    return 0;
}
