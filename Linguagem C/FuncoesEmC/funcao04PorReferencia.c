#include <stdio.h>

int soma_dobro(int *a, int *b){
    *a = *a * 2;
    *b = *b * 2;
    return *a + *b;
}
int main(){
    int x, y, res;
    printf("Digite o valor de X: \n");
    scanf("%d", &x);
    printf("Digite o valor de Y: \n");
    scanf("%d", &y);
    res = soma_dobro(&x, &y);
    printf("Reultado do processamento de %d e %d: %d\n", x ,y, res);
    return 0;
}