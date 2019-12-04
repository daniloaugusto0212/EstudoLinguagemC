#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 10
typedef struct{
    char marca[20];
    char modelo[20];
    int ano, ativo;
    char placa[10];

}carro;
carro carros[MAX]; //Quantidade máxima de cadastros de veículos
void menu(){  //Menu principal
    int op;

    do
    {
       system ("clear");
       printf("\n1 * Cadastrar veículo\n2 * Listar veículos\n3 * Filtrar por ano de fabricação\n4 * Listar á partir de um ano específico\n5 * Listar pelo modelo\n0 * Para sair\n");
       scanf("%d", &op);
       getchar();
       switch (op)
       {
       case 1:
            cadastrar();
           break;
        case 2:
            listar();
           break;
        case 3:
            filtrarAno();
            break;
        case 4:
            listarAnoEspef();
            break;
        case 5:
            listarModelo();
            break;

       default:

           break;
       }
       if (op != 0)
       {
           getchar();
       }       
       
    } while (op != 0);
}



void cadastrar(){ //Área de cadastro
    system("clear");
    char marca[20];
    char modelo[20];
    int ano;
    char placa[10];
    int op, cont;
    do
    {
        system("clear");        
        printf("Marca: \n");
        fgets(marca,sizeof(marca),stdin);

        printf("Modelo: \n");
        fgets(modelo,sizeof(modelo),stdin);
        fflush(stdout);

        printf("Ano: \n");
        scanf("%d", &ano);
        getchar();

        printf("Placa: \n");
        fgets(placa,sizeof(placa),stdin);

        
        

        for (int i = 0; i < MAX; i++)
        {
            if (carros[i].ativo == 0)
            {
                strcpy(carros[i].marca, marca);
                strcpy(carros[i].modelo, modelo);
                strcpy(carros[i].marca, marca);
                carros[i].ano = ano;
                strcpy(carros[i].placa, placa);
                carros[i].ativo = 1;
                break;
                cont++;
               
            }
        }        
    printf("\n1 = Continuar\n0 - Sair\n");
    scanf("%d", &op);
    if (op == 1)
        getchar();
    }
    while (op != 0 && cont <= 10) ;
    

}
void listar(){
    system("clear");
    printf("\n >>>> LISTA DE VEÍCULOS <<<<\n\n");
    int i, cont = 0;
    for (i = 0; i < MAX; i++)
    {
        if (carros[i].ativo == 1)
        {
            printf("Marca: %s", carros[i].marca);
            printf("Modelo: %s", carros[i].modelo);
            printf("Ano: %d\n", carros[i].ano);
            printf("Placa: %s", carros[i].placa);
            printf("\n---------------------\n");
            cont = 1;
            
        }

    }
    printf("\n0 - Sair\n");
    if (cont == 0)
    {
        noFilter();
    }
    
}
void filtrarAno(){
    system("clear");
    printf("\n >>>> FILTRANDO POR ANO <<<<\n\n");
    int filtroAno, resp;
    int cont = 0;

    printf("Digite o ano desejado: ");
    scanf("%d", &filtroAno);
    system("clear");
    printf("\n >>>> FILTRO ANO %d <<<<\n", filtroAno);
    for (int i = 0; i < MAX; i++)
    {
        if (carros[i].ano == filtroAno)
        {
            printf("Marca: %s", carros[i].marca);
            printf("Modelo: %s", carros[i].modelo);
            printf("Ano: %d\n", carros[i].ano);
            printf("Placa: %s", carros[i].placa);
            printf("\n---------------------\n");
            getchar();
            cont = 1;            
        }
    }
    
    if (cont == 0)
    {
        noFilter();
    }else
    {
        printf("\n0 - Sair\n");
    }
    
    

}

void listarAnoEspef(){
    system("clear");
    printf("\n >>>> FILTRANDO À PARTIR DO ANO <<<<\n\n");
    int filtroAno, resp;
    int cont = 0;

    printf("Digite o ano desejado: ");
    scanf("%d", &filtroAno);
    system("clear");
    printf("\n >>>> FILTRO VEÍCULOS À PARTIR DE: %d <<<<\n", filtroAno);
    for (int i = 0; i < MAX; i++)
    {
        if (carros[i].ano >= filtroAno)
        {

            printf("Marca: %s", carros[i].marca);
            printf("Modelo: %s", carros[i].modelo);
            printf("Ano: %d\n", carros[i].ano);
            printf("Placa: %s", carros[i].placa);
            printf("\n---------------------\n");
            getchar();
            cont = 1;
            
        }

    }    
    if (cont == 0)
    {
        noFilter();
    }

}


void listarModelo(){
    system("clear");
    printf("\n>>>> FILTRANDO POR MODELO <<<<\n\n");
    char filtroModelo[20];
    int cont = 0;
    
    printf("Digite o modelo desejado: ");
    scanf("%s", &filtroModelo);
    system("clear");
    printf("\n>>>> FILTRO MODELO: %s <<<<\n", filtroModelo);
    for (int i = 0; i < MAX; i++)
    {
        
        int cmp = strcmp (carros[i].modelo,filtroModelo);  //Compara strings 
        if (cmp == 10)
        {
            printf("Marca: %s", carros[i].marca);
            printf("Modelo: %s", carros[i].modelo);
            printf("Ano: %d\n", carros[i].ano);
            printf("Placa: %s", carros[i].placa);
            printf("\n---------------------\n");
            limparBuffer();
            cont = 1;           
            
        }
    }
    
    if (cont == 0)
    {
        noFilter();
    }


}
void noFilter(){
    printf("\nNão há veículos listados para o filtro selecionado!\n");
    printf("\n0 - Sair\n");
    getchar();

}
void limparBuffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF);

}


int main ()
{
    menu();

    printf("Fim do programa...\n");


    return 0;
}

