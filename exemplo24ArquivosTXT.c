#include <stdio.h>
#include <string.h>

void cadastrar(){

    char nome[30], aniversario[9];
    FILE *arq;
    arq = fopen("aniversarios.txt", "a+");
    if(arq == NULL){
        printf("Erro de abertura de arquivo.\n");
        
    }
    while (1)
    {
        printf("Nome (<Digite 'fim' para finalizar>): ");
        gets(nome);
        if(!strcmp(nome,"fim")){
            break;
        }else
        {
            printf("Data de aniversário (dd/mm/aa): ");
            gets(aniversario);
            fprintf(arq, "%s - %s\t", nome, aniversario);
        }        
              

    }
    fclose(arq);
    main();    
    
}
void remover(){
    char linha[39], nome_ret[30];
    FILE *arq, *arqtmp;
    arq = fopen("aniversarios.txt", "r");
    if(arq == NULL){
        printf("Erro de abertura de arquivo.\n");
       // return 0;
    }
    arqtmp = fopen("aniversarios_tmp.txt", "w");
    if(arqtmp == NULL){
        printf("Erro de abertura de arquivo.\n");
       // return 0;
    }
    printf("Digite o nome a ser retirado da lista: ");
    gets(nome_ret);
    while (1)
    {
        fgets(linha, 39, arq); //fgets lê toda linha até o enter
        if (feof(arq))
        {
            break;
        }
        if (strncmp(linha, nome_ret, strlen(nome_ret)))
        {
            fprintf(arqtmp, "%s", linha);
        }
        fclose(arq);
        fclose(arqtmp);
        if(remove("aniversarios.txt")){ //devolve 0 em caso de sucesso
            printf("Erro na remoção do arquivo.\n");
        }else
        {
            if(rename("aniversarios_tmp.txt", "aniversarios.txt")){ //devolve 0 em caso de sucesso
                printf("Erro no renomeamento do arquivo.\n");
            }
        }
        main();
        
        
        
    }
    
}

int main(){
    int op;

    printf("********** LISTA DE ANIVERSŔIOS **********\n");
    printf("1 - Cadastrar\n2 - remover\n");
    scanf("%d", &op);
    getchar();
    switch (op)
    
    {
    case 1:
        cadastrar();
        break;
    
    case 2:
        remover();
        break;
    
    default:
        break;
    }
    

    return 0;
}