#include <stdio.h>
#include <string.h>
#include <ctype.h>

char mensagem[30], opcao = '0';

void EntradaMenu(){
    do{
        printf("\nDigite 'X' para processar X\n");
        printf("\nDigite 'Y' para processar Y\n");
        printf("Digite 'E' para encerrar.\n");
        scanf("%d", &opcao);
        opcao = toupper(opcao);
    }while((opcao != 'X')&&(opcao != 'Y')&&(opcao != 'E'));
}
    
    void ImprimirMensagem(){
        printf("Mensagem: %s\n", mensagem);
    }
    int main(){
        EntradaMenu();
        switch (opcao)
        {
        case 'X':
            strcpy(mensagem, "Processamento de X");
            break;
        case 'Y':
            strcpy(mensagem, "Processamento de Y");
            break;
        case 'E':
            strcpy(mensagem, "Encerrando programa.");
            break;        
            
    }
    ImprimirMensagem();
    return 0;

}