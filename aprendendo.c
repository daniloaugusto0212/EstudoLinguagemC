#include <stdio.h>

typedef struct cadastro
{
    char nome[20];
    int idade;
}cadastro;

void preencher (cadastro *cliente){
    printf("\nNome: ");
    gets(&cliente->nome);
    printf("\nIdade: ");
    scanf("%d", &cliente->idade);

}
void imprimir (cadastro *cliente){
    printf("\nNome: %s, \nidade: %d", cliente->nome, cliente->idade);

}
int main(){

    cadastro *cliente = NULL;
        preencher (&cliente);
        imprimir(&cliente);
        cliente = (cadastro *) malloc(sizeof(cadastro) * 5);
        

        for (int i = 0; i < 5; i++)
        {
            preencher(&cliente[i]);
        }
        for (int i = 0; i < 5; i++)
        {
            imprimir(&cliente[i]);
        }
        free(cliente);
        
        
return 0;
}