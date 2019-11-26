#include <stdio.h>

int main(void){

   void fucaoPrint(int x[][3]); 
   int matriz[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
   fucaoPrint(matriz);
       
   
   system("pause");
   return 0;
    

}
void fucaoPrint(int x[][3]){/*necessário informar ao menos um dos valores da matriz*/
    int i, j;
   for ( i = 0; i < 3; i++)
   {
       for ( j = 0; j < 3  ; j++)
       {
           printf("%i ", x[i][j]);
       }
       printf("\n");
   }

}