#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
    int num1, num2, operador ;
    int resultado;
    int i;
    system("clear");
    printf("\n ***** CALCULADORA *****\n\n");
    printf("Digite o 1º número para calcular: \n");
    scanf("%i", &num1);

    printf("Digite um operador:\n[1] Soma\n[2] Subtração\n[3] Multiplicação\n[4] Divisão\n[5] Exponenciação\n");
    scanf("%i", &operador);

    printf("Digite o 2º número para calcular: \n");
    scanf("%i", &num2);
    
    switch (operador)
    {
    case 1:
        resultado = num1 + num2;
        printf("O resultado da soma é %i",resultado);
         
        break;
    case 2:
        resultado = num1 - num2;
        printf("O resultado da subtração é %i",resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("O resultado da multiplicação é %i",resultado);
        break;
    case 4:
        if (num2 == 0)
        {
            printf("Não existe divisão por 0");
        }else
        {
            resultado = num1 / num2;
        printf("O resultado inteiro da Divisão é %i",resultado);
        
        }        
        break;        
    case 5:
        resultado = 1;
        for ( i = 1; i <= num2; i++)
        {
            resultado *= num1;
            
        }
        
        
        printf("O resultado da exponenciação é %i",resultado);
        break;    
    
    default:         
        printf("Você não selecionou uma opção válida.");
        break;
    }

    printf("\n");

    
    getchar(); //pausa em qualquer sistema operacional
    //system("pause");//Usado somente para o windows para pausar o DOS.
    return 0;
}