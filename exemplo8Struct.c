#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[30], ender[50];
    int dia, mes, ano;
   
}PESSOA;
typedef struct {
    PESSOA *pPessoa;
    int QtdPessoas;
}LISTAPESSOAS;

int menu(){
    int opcao;
    printf("\n1 - Inserir Registro\n2 - Buscar Registro\n3 - Remover Registro\n4 - Buscar Registro\n");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        InserirRegistro();
        break;
    case 2:
        BuscarRegistro();
        break;
    case 3:
        RemoverRegistro();
        break;
    case 4:
        BuscarRegistro();
        break;
    case 0:
        exit;
        break;
    
    default:
        break;
    }
}

    
void CriarListaVAzia( LISTAPESSOAS *listaP){
    listaP->pPessoa = (PESSOA *)malloc(10*sizeof(PESSOA));
    listaP->QtdPessoas = 0;

    }
int BuscarRegistro(char *nome,  LISTAPESSOAS listaP,PESSOA *pessoa){
    int i = 0;
    if (listaP.QtdPessoas == 0) 
    {
        return -1; //indicativo de lista vazia
    }
    for ( i = 0; i < listaP.QtdPessoas; i++)
    {
        if (!strcmp(nome,(listaP.pPessoa+i)->nome))
        {
            pessoa = (listaP.pPessoa+i);
            return i;
        }
        return -2; //indicativo de registro não encontrado
    }
    
} 
int InserirRegistro(PESSOA pessoa, LISTAPESSOAS *listaP, int pos){
    int i;
    if (listaP->QtdPessoas == 10)
    {
        return -1; //indicativo de lista cheia
    }
    if (pos > listaP->QtdPessoas)
    {
        return -2; //indicativo posição extrapola limite do vetor
    }
    for ( i = listaP->QtdPessoas; i>=pos; i--)
    {
        memcpy((listaP->pPessoa+i),(listaP->pPessoa+i-1),sizeof(PESSOA));
    }
    memcpy((listaP->pPessoa+pos),&pessoa,sizeof(PESSOA));
    (listaP->QtdPessoas)++;
    
    
}
int RemoverRegistro(LISTAPESSOAS *listaP, int pos){
    int i;
    if (listaP->QtdPessoas == 0)
    {
        return -1; //indicativo de lista vazia
    }
    if (pos >= listaP->QtdPessoas)
    {
        return -2; //indicativo posição extrapola qtd pessoas armazenadas
    }
    for ( i = pos; i < listaP->QtdPessoas-1; i++)
    {
        memcpy((listaP->pPessoa+i), (listaP->pPessoa+i+1), sizeof(PESSOA));
    }
    (listaP->QtdPessoas)--;
    
    
    
}
int main(){
    PESSOA Pessoa;
    PESSOA *pPessoa;
    pPessoa = &Pessoa;

   
    
    menu();



    return 0;
}


