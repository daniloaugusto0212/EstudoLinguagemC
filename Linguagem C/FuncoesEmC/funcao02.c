#include <stdio.h>
#include <string.h>
#include <time.h>

int DezenaSorteada(){
    int dezena;
    do
    {
        dezena = rand()%61;
    } while (dezena == 0);
    return dezena;   
    
}
int main(){
    int i = 0, qtd;
    srand(time(NULL));
    printf("Quantidade de dezenas a serem sorteadas: ");
    scanf("%d", &qtd);
    for (; i <qtd; i++)
   {
        printf("Dezena [%d]: %d\n", i + 1, DezenaSorteada());
    }
    return 0;
    
}