
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 5 //define um valor máximo
	
int main()
{
/*  char str0[6]="98765",str1[5]="abcd",str2[10]="efghijklm";

    printf("str0 = %s\t str1 = %s\t str2 = %s\n",str0,str1,str2);
    strcpy(str1,"1234567");
    printf("str0 = %s\t str2 = %s\n",str0,str2);
}*/
    int i;
    printf("Crescente\n");
    for (i = 1; i <= MAX; i++) //ordem crescente
    {
    printf("Me salva vez %d!\n",i);

    }
    printf("Decrescente\n");
    for (i = MAX; i >= 1; i--) //ordem decrecente
    {
    printf("Me salva vez %d!\n",i);
    }
    char c;
    for (c = 'A'; c < 'z'; c++) //usando caracteres
    {
        printf("%c\t", c);
    }
    
    return 0;
}
