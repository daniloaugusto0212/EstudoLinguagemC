#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 15;
    int *pnum, **p2num, ***p3num;

    //pnum aponta para num
    pnum = &num;

    //p2num aponta para pnum
    p2num = &pnum;

    //p3num aponta para p2num
    p3num = &p2num;

    num = num * 2;
    printf("\n VALOR DE NUM \n Original = %d", num);

    *pnum = *pnum + 1;
    printf("\n Primeiro ponteiro: %d", num);

    **p2num = **p2num + 1;
    printf("\n Segundo ponteiro: %d", num);

    ***p3num = ***p3num + 1;
    printf("\n Terceiro ponteiro: %d", num);

    getchar();
    return 0;
}
