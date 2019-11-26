#include <stdio.h>

int main(void){

    int intVar = 9999999;
    int intVar2 = 10;
    double doubleVar = 1000.123456789;

    //Formatção de variáveis inteiras
    printf("variável inteira (%%d) = %d\n", intVar);
    printf("variável inteira (%%i) = %i\n", intVar);
    printf("variável inteira (%%x) = %x\n", intVar); //Hexadecimal
    printf("variável inteira (%%o) = %o\n", intVar); //Octal
    printf("\n");
    

    //Formatação de variáveis float e double
    printf("variável double (%%f) = %f\n", doubleVar);
    printf("variável double (%%e) = %e\n", doubleVar);
    printf("variável inteira (%%g) = %g\n", doubleVar);
    printf("variável inteira (%%a) = %a\n", doubleVar);
    printf("\n");
    
    system("pause");
    return 0;
}