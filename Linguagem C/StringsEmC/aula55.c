#include <stdio.h>

int main (void){

    int i;
    for ( i = 1; i <= 20; i++)
    {
        if (i % 3 == 0 && i % 9 == 0)
        {
            printf("%i é divisivel por 3 e 9\n", i);
            break;
        }else
        {
            printf("%i não é\n", i);
        }
        
        
    }
    

    getchar();
    return 0;
}