#include <stdio.h>
#include <math.h>

float exponenciacao(float x,int y){
    int i;
    float resultado = 1;
        for ( i = 1; i <= y; i++)
        {
            resultado *= x;
            
        }
        return resultado;
}

float finaciamento(float valorFinanciamento, int qtdParcelas){
    float prestacao;
    float taxa;
    switch (qtdParcelas)
    {
    case 6:
        taxa = 0.7 / 12;
        prestacao = valorFinanciamento *(exponenciacao((1+taxa),6)*taxa) / (exponenciacao((1 + taxa),6)-1);
        break;
    case 12:
        taxa = 1 / 12;
        prestacao = valorFinanciamento *(exponenciacao((1+taxa),12)*taxa) / (exponenciacao((1 + taxa),12)-1);
        break;
    case 18:
        taxa = 1.2 / 12;
        prestacao = valorFinanciamento *(exponenciacao((1+taxa),18)*taxa) / (exponenciacao((1 + taxa),18)-1);
        break;
    case 24:
        taxa = 1.5 / 12;
        prestacao = valorFinanciamento *(exponenciacao((1+taxa),24)*taxa) / (exponenciacao((1 + taxa),24)-1);
        break;
    case 36:
        taxa = 1.8 / 12;
        prestacao = valorFinanciamento *(exponenciacao((1+taxa),36)*taxa) / (exponenciacao((1 + taxa),36)-1);
        break;            
    default:
        break;
    }
    return prestacao;
}

int main(){

    float financiamentoVal;
    int parcelasVal;
   
    
    do 
    {
        printf("\nDigite o valor á Financiar: ");
        scanf("%f", &financiamentoVal);

        printf("\nDigite o números de parcelas: [6, 12, 18, 24, 36]: ");
        scanf("%i", &parcelasVal);

        printf("O valor da prestação mensal é %.2f\n", finaciamento(financiamentoVal,parcelasVal));

    }while (financiamentoVal != 0);
    
}
