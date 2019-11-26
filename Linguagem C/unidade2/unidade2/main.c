#include <stdio.h>

int funcaoRetornaDobro(int a, int b)
{
    a = a * 2;
    b = b * 2;

    return a + b;
}
int main()
{
    int x, y, res;

    printf("Digite um valor para X: ");
    scanf("%d", &x);
    printf("Digite um valor para Y: ");
    scanf("%d",&y);
    res = funcaoRetornaDobro(x,y);
    printf("%d\n", &res);

    return 0;
}
