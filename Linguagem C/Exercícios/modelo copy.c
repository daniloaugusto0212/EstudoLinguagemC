#include <stdio.h>
#include <string.h>


int main(){
    int numProjetos[10], i;
    
    

struct projetos
{
    int codigo;
    float valor;
    char tipo;
}boleto;


    for ( i = 0; i < 10; i++)
    {
        numProjetos[i] = 0;

    
    }
    printf("\nCódigo: ");
    scanf("%i", &boleto.codigo);

    while(boleto.codigo != -1)
    {
        printf("\nValor: ");
        scanf("%f", &boleto.valor);

        printf("\n[D]- Despesa  [R]- Receita ");
        scanf("%c", &boleto.tipo);
        getchar();
    }



}