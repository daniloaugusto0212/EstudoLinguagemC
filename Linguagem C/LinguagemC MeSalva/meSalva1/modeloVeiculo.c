 #include <stdio.h>
#define T 50/*NUMERO MAXIMO DE CADASTROS*/

/*ESTRUTURA DO CADASTRO*/
typedef struct{
        char marca[15], cor[10];
        int id, ano;
        float preco;
}CARRO;/*FINAL DA ESTRUTURA DO CADASTRO*/



int menu();/*MOSTRA MENU*/

CARRO inserir();
void exibir(CARRO c[], int t);
void exibirPreco(CARRO c[], int t, float preco);
void exibirMarca(CARRO c[], int t, char marca[]);
void exibirCarro(CARRO c[], int t, char marca[], int ano, char cor[]);

int main(){
    int n, cont = 0, ano;
    float preco;
    char marca[15], cor[10];
    printf("\nQuantos veículos deseja ter no cadastro?");
    scanf("%d",&n);
    
    CARRO car[n];/*EFETUAR O CADASTRO DO CLIENTE*/
    int opc, opChefe, opRelatorio,  processo;/*VARIÁVEIS PARA AUXILIAR OS MENUS E CASO RESOLVIDO*/
    do{
       opc = menu();/*MENU PRINCIPAL*/
       switch(opc){
           case 1:
             if(cont < n){              
              car[cont] = inserir();                 
                 cont++;  
             }
             else                
                 printf("\nEstrutura cheia");                
          getchar();
           break;
           case 2:
            if(cont > 0){              
             exibir(car, cont);
            }
            else           
             printf("\nEstrutura vazia");            
         getchar();            
           break;
           case 3:
            if(cont > 0){
             printf("\nInforme o preco do carro a ser exibido: ");
             scanf("%f",&preco);
             exibirPreco(car, cont, preco);
            }
            else          
              printf("\nEstrutura vazia");            
          getchar(); 
           break;
           case 4:
            if(cont > 0){
             getchar();
             printf("\nInforme o Marca do carro a ser exibido: ");
             gets(marca);
             exibirMarca(car, cont, marca);           
                
            }
            else          
             printf("\nEstrutura vazia");            
         getchar(); 
        break;
           case 5:
            if(cont > 0){
             getchar();
             printf("\nInforme o Marca do carro a ser exibido: ");
             gets(marca);
             printf("\nInforme o Ano do carro a ser exibido: ");
             scanf("%d",&ano);
             getchar();
             printf("\nInforme o Cor do carro a ser exibido: ");
             gets(cor);
             exibirCarro(car, cont, marca, ano, cor);                 
                
            }
            else          
             printf("\nEstrutura vazia");            
         getchar(); 
           break;
           case 0: break;
           default:
        printf("Opcao %d invalida",opc);
           break;

       }
    }while(opc != 0);
}

int menu(){//menu que vai retornar a opção escolhida;;
    int opc;
    system("cls");
    printf("1-Novo cadastro\n"
           "2-Imprimir Estrutura\n"
           "3-Imprimir por preco\n"
           "4-Imprimir por Marca\n"
           "5-Imprimir por Marca, Ano, Cor\n"
           "0-Sair\n");
    scanf("%d", &opc);
    return opc;
}
CARRO inserir(CARRO car){
 CARRO c;
 getchar();
 printf("Informe a marca do carro: ");
    gets(c.marca);
    printf("Informe a cor do carro: ");
    gets(c.cor);
    printf("Informe o ano do carro: ");
    scanf("%d",&c.ano);
    printf("Informe o preco do carro: ");
    scanf("%f", &c.preco);
      return c;

}

void exibir(CARRO c[], int t){
 int x;
 for(x = 0; x< t; x++){
  printf("Id: %d\n", x+1);
  printf("Marca: %s\n", c[x].marca);
  printf("Cor: %s\n", c[x].cor);
  printf("Ano: %d\n", c[x].ano);
  printf("Preco: %.2f\n", c[x].preco);
  printf("\n");
  
 }
}
void exibirPreco(CARRO c[], int t, float preco){
 int x;
  for(x = 0; x< t; x++){
    if(preco == c[x].preco){
     printf("Id: %d\n", x+1);
     printf("Marca: %s\n", c[x].marca);
     printf("Cor: %s\n", c[x].cor);
     printf("Ano: %d\n", c[x].ano);
     printf("\n");
    
    }  
  }
}
void exibirMarca(CARRO c[], int t, char marca[]){
 int x;
  for(x = 0; x< t; x++){
    if(strcmp(c[x].marca, marca) == 0){
     printf("Id: %d\n", x+1);
     printf("Preco: %.2f\n", c[x].preco);
     printf("Cor: %s\n", c[x].cor);
     printf("Ano: %d\n", c[x].ano);
     printf("\n");
    
    }
   
  }
}
void exibirCarro(CARRO c[], int t, char marca[], int ano, char cor[]){
  int x;
  for(x = 0; x< t; x++){
    if(strcmp(c[x].marca, marca) == 0){
      if(ano == c[x].ano){
        if(strcmp(c[x].cor, cor) == 0){
          printf("Id: %d\n", x+1);
          printf("Preco: %.2f\n", c[x].preco);
          printf("\n");
        }        
      }
  }
  }
}