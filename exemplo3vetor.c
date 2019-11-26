#include <stdio.h>

int main(){
int vet[10] = {0,1,2,3,4,5,6,7,8,9};
int *pvet;
pvet = vet;
*(pvet+3) = 13;
vet[5] = 15;
for (int i = 0; i < 10; i++)
{
    printf("vet[%d] = %d\t*(pvet+%d)=%d\n",i,vet[i],i,*(pvet++));
}

}