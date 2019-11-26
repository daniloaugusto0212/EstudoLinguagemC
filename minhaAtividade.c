#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    char nome[30];
    int anoNasc;
    float montanteGasto;

}CLIENTE;

typedef struct 
{
    CLIENTE *pCliente;
    int qtdClientes;
}LISTACLIENTE;


void ListaVazia( LISTACLIENTE *listaC){
    listaC->pCliente = (CLIENTE *)malloc(10*sizeof(CLIENTE));
    listaC->qtdClientes = 0;
    printf("\n Teste");
}
void Cadastrar(){
    

}
int main(){
    int qtdLista;
    int *pQtdLista;
    pQtdLista = &qtdLista;
    printf("Quantidade do cadastro:\n");
    scanf("%d", &qtdLista);
    ListaVazia(&qtdLista);

}