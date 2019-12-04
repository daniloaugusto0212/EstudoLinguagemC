#include <stdio.h>

int a, b; //numeros a serem manipulados
int soma(){
    return a + b;
}
int sub(){
    return a - b;
}
int mul(){
    return a * b;
}
int div(){
    return a / b;
}
char Menu(){
    char opcao;
    do
    {
        printf("Digite: \n\t'+' para soma\n\t'-' para subtração\n");
        printf("\t'*' para multiplicação\n\t'/' para divisão:\n");
        //printf("Opção: ");
        scanf("%c", &opcao);
    } while ((opcao != '+') && (opcao != '-') && (opcao != '*') && (opcao != '/'));
   return opcao; 
}
int main(){
    char op;
    int res;
    printf("Valor de 'a': ");
    scanf("%d", &a);
    printf("Valor de 'b': ");
    scanf("%d", &b);
    op = Menu();
    switch(op){
        case '+': 
            res = soma();
            break;
        case '-': 
            res = sub();
            break;
        case '*': 
            res = mul();
            break;
        case '/': 
            res = div();
            break;
    }
    printf("Resultado: %d\n", res);
    return 0;
}