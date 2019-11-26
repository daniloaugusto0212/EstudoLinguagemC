
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void pesoIdeal (char sexo, float altura)
{
    float pesoIdeal;
    switch (toupper(sexo))
    {
    case 'F':
        pesoIdeal = altura * 62.1 - 44.7;
        break;
    case 'M':
        pesoIdeal = altura * 72.7 - 58;
        break;
    default: printf("Sexo inválido! Digite F ou M\n");
        break;
    }
    printf("Peso ideal: %.2f \n", pesoIdeal);
}

int main()
{
    char sexo;
    float altura;

    puts("Digite seu sexo: \n");
    scanf("%c", &sexo);
    puts("Digite sua altura (Metros): \n");
    scanf("%f",&altura);

    pesoIdeal(sexo,altura);
    

    return 0;
}
