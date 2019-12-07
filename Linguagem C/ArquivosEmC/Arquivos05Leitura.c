#include <stdlib.h>
#include <stdio.h>



int main(){
   
    FILE *parq;
    char linha[50];   
   
    parq = fopen("arquivo02.txt", "r");

   while (fgets(linha, 5, parq) != NULL){
    printf("%s", linha);   
   }




    fclose(parq);
    getchar();
    return 0;

}