#include <stdio.h>

typedef struct{
    char nome[30], ender[50];
    int dia, mes, ano;
    
}PESSOA;

int main(){
    PESSOA p;
    strcpy(p.nome, "Danilo");
    printf("Endereço: ");
    scanf("%s",p.ender);
    p.dia = 15;
    p.mes = 8;
    printf("Ano: ");
    scanf("%d", &p.ano);

    printf("%s, %s, %d/0%d/%d\n", p.nome, p.ender, p.dia, p.mes,p.ano);

    
    return 0;
}


