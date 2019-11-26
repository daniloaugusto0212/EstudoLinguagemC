#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define Max 10
int opMenu, i, cod, op, limite, total = Max;  //Variáveis globais

typedef struct clientes  
{
    char nome[30];
    int anoNasc,ativo;
    float compraMes;

}p;
p *novo, *novo1;
p cadastro[Max];

int main(){       
   
    menu();   

return 0;
}

void cadastrar(){ //Função para cadastro de clientes
    
    do
    { 
        if (limite >= total){       //Verifica se a memória está cheia ao iniciar o cadastro e ao retornar de outra função, caso esteja, pergunta se  deseja realocar
                printf("MEMÓRIA CHEIA!!!\n");
                printf("\n1 - Realocar\n0 - Menu\n" );            
                scanf("%d", &op);
                if (op == 1){
                    novo1 = (p *) realloc(novo, total* sizeof(p)); //Realocar memória
                    novo = novo1;
                    total =+ Max;
                    getchar();
                    cadastrar();
                }
        }
        novo = (p *) malloc(total* sizeof(p));  //Alocação de memória com no máximo 10 clientes 
        system("clear"); 
        printf("\n******* CADASTRO DE CLIENTE *******\n\n"); //Início do cadastro
        printf("Nome: ");
        fgets(novo->nome,sizeof(novo->nome),stdin);
                
        printf("Ano de Nasc.: ");
        scanf("%i", &novo->anoNasc);
        getchar();

        printf("Montante de Compras: R$");
        scanf("%f", &novo->compraMes);
        getchar();                       
        
        for (int i = 0; i < total; i++) //Copiando cadastro para dentro do array
        {
            if (cadastro[i].ativo == 0)
            {
                strcpy(cadastro[i].nome, novo->nome);
                cadastro[i].anoNasc = novo->anoNasc;
                cadastro[i].compraMes = novo->compraMes;                
                cadastro[i].ativo = 1;
                break;           
               
            }

        }
                
        printf("\n1 - Cadastrar Novo\n0 - Sair\n");
        scanf("%d", &opMenu);
        if (opMenu == 1)
        {      
        
            limite++;
            if (limite >= total){
                printf("\n\nMEMÓRIA CHEIA!!!\n"); //verifica se a memória está cheia ao final de cada cadastro 
                printf("\n1 - Realocar\n0 - Menu\n" );            
                scanf("%d", &op);
                if (op == 1){
                    free(novo);
                    novo1 = (p *) realloc(novo, total* sizeof(p));
                    novo = novo1;
                    total += Max;
                    getchar();
                    cadastrar();
                }
            }
            getchar();           

        } 
       
    }while (opMenu != 0);
    free(novo);
    menu();    
}

void listar(){ //Função para mostrar a lista completa de clientes cadastrados
    system("clear");
    printf("\n >>>> LISTA DE CLIENTES <<<<\n\n");
    int i, cont = 0;
    for (i = 0; i < total; i++)
    {
        if (cadastro[i].ativo == 1)
        {
            printf("Cód.: %i\n", i + 1);
            printf("\nNome: %s\n", cadastro[i].nome);
            printf("Ano de Nasc.: %i\n", cadastro[i].anoNasc);
            printf("\nMontante de Compras: R$%.2f", cadastro[i].compraMes);            
            printf("\n-------------------------------\n");
            cont = 1;            
        }       

    }
    
    if (cont == 0)
    {
        noFilter();
    }        
     
}

void remover(){ //Função para excluir clientes, mostra a lista e pede o código do cliente à ser removido
    int codigo;
    if (cadastro[i].ativo == 1)
    {
        listar();
        printf("\nDigite o código do cliente a ser removido ou 0 para sair sem excluir:\n");
        scanf("%i", &codigo);
        if (codigo == 0)
        {
            menu();
        }else
        {
            codigo--;
            cadastro[codigo].ativo = 0;
            printf("\nCliente excuído com sucesso!");
            system("clear");
            printf("\n1 - Excluir outro?\n0 - Sair \n");
            scanf("%d", &opMenu);
            if (opMenu == 1)
            {
                remover();
            }else{
                menu();
            }
        }       

    }else
    {
        noFilter();
        
    } 
    
    
}


int atualizaMontante(){ //Atualiza montante de um cliente especifico, mostra a lista e pede o código do cliente à ser atualizado
    int cod;
    float montanteAtual;
    if (cadastro[i].ativo == 1)
    {
        listar();
        printf("\nDigite o código do cliente para atualizar ou 0 para sair sem atualizar:\n ");
        scanf("%i", &cod);
        if (cod == 0)
        {
            menu();
        }else
        {
            
            system("clear");
            printf("Cód.: %i\n", i + 1);
            printf("Nome: %s\n", cadastro[cod].nome);
            printf("Ano de Nasc.: %i\n", cadastro[cod].anoNasc);
            printf("\nMontante de Compras: R$%.2f", cadastro[cod].compraMes);            
            printf("\n--------------------------------------\n");
            printf("\nDigite o valor a ser adicionado ao montante de %s\nR$", cadastro[cod].nome);
            scanf("%f", &montanteAtual);
            cadastro[cod].compraMes += montanteAtual;
            printf("\nMontante atualizado para %0.2f!", cadastro[cod].compraMes);
            system("clear");
            printf("\n1 - Atualizar outro?\n0 - Sair \n");
            scanf("%d", &opMenu);
            if (opMenu == 1)
            {
                atualizaMontante();
            }else
            {
                menu();
            }
        }
                  

    }else
    {
        noFilter();
        
    }


}
int zerarMontantes(){ //Função para zerar todos os montantes manualmente na virada de mês
    int op;
    system("clear");
    printf("\nTem certeza que deseja ZERAR todos os montantes?\n1- SIM\n2- NÃO\n");
    scanf("%i", &op);
    if (op == 1)
    {
         for ( i = 0; i < total; i++)
        {
            cadastro[i].compraMes = 0;
        }
        printf("\nTodos os montantes foram ZERADOS com sucesso! \n");
    }else
    {
        printf("\nNenhum montante foi ZERADO!\n");
    }
    printf("\n0- Menu\n");
    scanf("%i", &op);
    if (op == 0)
    {
        menu();
    }      
    
    
}
int melhorComprador(){    //Função que mostra o melhor comprador do mês até o momento
    float maior;

    {
        for ( i = 0; i < total; i++)
        {
            if (cadastro[i].ativo == 1){
                if (cadastro[i].compraMes > maior)
                {
                    maior = cadastro[i].compraMes;
                    cod = i; 
                }else
                {
                    maior = maior;
                    cod = cod;
                }               
            
            }
        }
    system("clear");
    printf("\n********** MELHOR COMPRADOR DO MÊS **********\n");
    printf("Cód.: %i\n", cod + 1);
    printf("Nome: %s\n", cadastro[cod].nome);
    printf("Ano de Nasc.: %i\n", cadastro[cod].anoNasc);
    printf("\nMontante de Compras: R$%.2f", cadastro[cod].compraMes);            
    printf("\n----------------------------------\n");

    printf("\n0- Menu\n");
        scanf("%i", &op);
        if (op == 0)
        {
            menu();
    }    

    
}
}
int listaClienteEspec(){    //Mostra o montante de um cliente pelo seu nome
    
    system("clear");
    printf("\n>>>> Montante Cliente <<<<\n\n");
    char filtroCliente[30];
    int vazio = 0;    
    printf("Digite o Cliente desejado: ");
    scanf("%s", &filtroCliente);     
    system("clear");
        
    for (int i = 0; i < total; i++)
    {
        if (cadastro[i].ativo == 1){
            int cmp = strcmp (cadastro[i].nome,filtroCliente);  //Compara strings 
            if (cmp == 10)
            {
                printf("Montante de Compras de %s\nR$%.2f", cadastro[i].nome, cadastro[i].compraMes);            
                printf("\n----------------------\n");                
                
                vazio = 1;           

            }
        }    
    }
    
    if (vazio == 0)
    {
        noFilter();
    }
}
int menu(){ //Menu interativo
    system("clear");   
    printf("************LOJAS TABAJARA*************\n");
    printf("Escolha uma opção:\n\n[1]-Incluir um novo cliente \n[2]-Listar de clientes\n[3]-Remover cliente\n[4]-Atualizar o montante de compras do cliente realizadas no mês corrente\n[5]-Zerar todos os montantes de compras por ocasião da virada de mês\n[6]-Listar o cliente melhor comprador\n[7]-Exibir um montante de compras de um cliente específico\n[0]-Sair\n");
    scanf("%i", &opMenu);
    getchar();
    

    switch (opMenu)
    {
    case 1:
        cadastrar();
        break;
    case 2:
        listar();
        break;
    case 3:
        remover();
        break;
    case 4:
        atualizaMontante();
        break;
    case 5:
        zerarMontantes();
        break;
    case 6:
        melhorComprador();
        break;
    case 7:
        listaClienteEspec();
        break;
    case 0:
        system("clear");
        printf("\n\n******* FIM DO PROGRAMA *******\n");
        exit(0);
        break;
    default:
        system("clear");
        printf("\nOpção inválida! Digite 1 - para tentar novamente.\n");
        scanf("%d", &op);
        if (op == 1){
            menu();
        }else{
            return 0;
        }        
        break;
    }
    printf("\n0 - Sair\n");
    scanf("%d", &opMenu);
    getchar();
    menu();
    
}
int noFilter(){ //Esta função é acionada quando não há clientes listados para o filtro selecionado ou a lista está vazia
    system("clear");
    printf("\nNão há CLIENTES listados para o filtro selecionado!\n");
    printf("\n0 - Sair\n");
    scanf("%d", &opMenu);
    getchar();
    menu();

    

}
   

