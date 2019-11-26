//Calcula e informa a soma de 2 valores

#include <stdio.h>
#include <stdlib.h>


/*int main()
{
    char c;
    char s[20];

    printf("Digite uma string: \n");
    gets(s); //para gravar string, mesmo que scanf("%s",s);

    printf("A string digitada foi  %s.\n",s);


    printf("Digite um caracter: \n");
    c = getchar();  //para gravar caracter, mesmo que scanf("%c",&c);

    puts("O caractere digitado foi:" ); //similar ao printf, só que não lê variáveis e pula uma linha.
    printf("%c", c);

    return 0;
}*/

//MANIPULAÇÂO
#include <string.h>
int main()
{
    char s1[10] = {"Me"}, s2[10] = {"Salva"};

    int cmp = strcmp (s1, s2); // compara as strings s1 e  s2 e dá um resultado em número inteiro "0" se forem iguais
    printf("Comparação: %d \n", cmp);

    strcat(s1, s2);
    printf("Concatenação: %s\n", s1); //Mostra as strings concatenadas e atribuidas ao s1

    int len = strlen(s1);
    printf("Tamanho STRING: %d\n", len); //MOstra o tamanho da String s1 já concatenada

    char copia[10];
    strcpy(copia, s1); // Copia a string s1 para a variável de caractere cópia
    printf("Cópia da s1: %s\n", copia);

    printf("Terceiro caractere: %c\n", s1[2]); //Mostra o caractere que está na terceira posição "char 2"

    return 0;
    
}
