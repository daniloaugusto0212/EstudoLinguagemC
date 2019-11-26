#include <stdio.h>

int main(void){

   void fucaoPrint(int x, int vetor []);
   int x = 10;
   int vetor[1] = {10};
   fucaoPrint(x, vetor); 
   printf("Variavel int na funcao principal = %i\n", x);
   printf("Vetor na função principal = %i\n", vetor[1]);
   
   system("pause");
   return 0;
    

}
void fucaoPrint(int x, int vetor []){
    
    x = x + 10;
    vetor[1] = 20;
    printf("Variavel int na funcao print = %i\n", x);
    printf("Vetor na função print = %i\n", vetor[1]);

  
}