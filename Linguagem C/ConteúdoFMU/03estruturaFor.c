#include <stdio.h>

//Cálculo do Fatorial usando For

int main()
{
    int N,fat=1,i=1;

    printf("N: "); scanf("%d",&N);
    if(N < 0){
        printf("Não existe fat de num. negativo. ");
    }else{
        if (!N){
            fat=1;
        }
        else
        {
            for (;i<=N;i++)
            fat = fat *i;
        }
        printf("Valor do fatorial de %d é %d. ", N,fat);
        
        }
        return 0;
        
    }
    
