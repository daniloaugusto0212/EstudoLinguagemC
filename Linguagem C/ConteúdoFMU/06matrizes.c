#include <stdio.h>
int main()
{
    float matriz[5][4];
int i,j;

    for (i = 0; i < 5; i++)
        for (j = 0; j < 4; j++) 
        {
            
            printf("[%i] [%i]\n",i+1,j+1);/*+1 para nãoiniciar do 0*/
        }

return 0;    
    
}