#include <stdio.h>
char nome[20];
int i;

int main (void){

    void alfabetico(char variavel);
    
    
    printf("Digite uma palavra: ");
    scanf("%s", nome);

    
    while (nome[i] != '\0')
    {
        alfabetico(nome[i]);
        i++;
    }
    



    return 0;
}
void alfabetico(char variavel){
    
    if ((variavel >= 'a' && variavel <= 'z') || 
        (variavel >= 'A' && variavel <= 'Z'))
    {
        printf("%c É uma letra\n", nome[i]);
    }else
    {
        printf("%c Não é uma letra\n",nome[i]);
    }
    
    

}