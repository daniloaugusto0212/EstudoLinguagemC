#include <stdio.h>

//Cálculo do Fatorial usando While

int main()
{
    int N,fat=1,i=1;

    printf("N: "); scanf("%d",&N);
    if(N < 0){
        printf("Não existe fat de num. negativo. ");
    }else{
            do            
        {
            fat = fat * i;
            i++;
        }
            while (i <= N);
               
        
        printf("Valor do fatorial de %d é %d. ", N,fat);
        
        }
        return 0;
        
    }
    