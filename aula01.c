#include <stdio.h>

int main(void){

    int num1, num2;
    
    system("clear");
    printf("\n***** VERIFICA SE O 1º NÚMERO É DIVISÍVEL PELO 2º *****\n\n");

    printf("Digite um número inteiro: \n");
    scanf("%i", &num1);

    printf("Digite outro número inteiro: \n");
    scanf("%i", &num2);
    int resultado = num1 / num2;

    if (num2 == 0)
        printf("Divisão por zero não permitido!\n");
    else{
        if (num1%num2 == 0){
            printf("%i é divisível por %i...\n", num1,num2);
            printf("O resultado é %i.\n", resultado);
        }else{
            printf("%i não é divisível por %i...\n", num1,num2);
        }

    }

    return 0;
}
