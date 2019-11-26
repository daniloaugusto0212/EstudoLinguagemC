#include <stdio.h>
#include <stdlib.h>

int main(){
    int n =4;
    int *at = (int *) malloc(sizeof(int)*n);
    int i = 0;
    for ( i = 0; i < n; i++)
    {
        at[i] = i;
    }
    for ( i = 0; i < n; i++)
    {
        printf("at[%d] = %d\n", i,at[i]);

    }
    printf("\n");
    at = (int *) realloc(at, sizeof(int)*(n+4));
    //0-7
    for ( i = n; i < n+4; i++)
    {
        at[i] = i;
    }
    for ( i = 0; i < n+4; i++)
    {
        printf("at[%d] = %d\n", i,at[i]);
    }
    free(at);
    
    
    
return 0;
}