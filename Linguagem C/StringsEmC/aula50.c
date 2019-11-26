#include <stdio.h>

int main (void){
    _Bool stringsIguais(char s1[], char s2[]);
    
    if (stringsIguais("casa", "casa"))
    {
        printf("São iguais\n");
    }else
    {
        printf("Não são iguais\n");
    }
    
    

    return 0;
}
_Bool stringsIguais(char s1[], char s2[]){ //Compara e verifica se as strings são iguais

    int i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0')
    {
        return 1;
    }else
    {
        return 0;
    }
    
    
}