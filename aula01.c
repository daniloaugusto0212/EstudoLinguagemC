#include <stdio.h>

int main(void){

    int num1, num2;

    printf("Digite um número inteiro: \n");
    scanf("%i", &num1);

    printf("Digite outro número inteiro: \n");
    scanf("%i", &num2);

    if (num2 == 0)
        printf("Divisão por zero não permitido!\n");
    else{
        if (num1%num2 == 0){
            printf("%i é divisível por %i", num1,num2);
        }else{
            printf("%i não é divisível por %i", num1,num2);
        }

    }

    return 0;
}
