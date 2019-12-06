#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //aceitar acentuação no pronpt
  ///  setlocale(LC_ALL, 'Portuguese');


   //Declaração e atribuição de valores
   int num = 10; double numf = 25.4; char letra = 'a';

   //Uso de * mostra que a variável é um ponteriro
   int *pnum; double *pnumf; char *pletra;

   //PEgando o endereço das variáveis
   pnum = &num; pnumf = &numf; pletra = &letra;

   printf("-----------------------: pnum - pnumf - pletra");
   printf("\n Valores das variáveis : %d - %f - %c", num, numf, letra);
   printf("\n Valores dos ponteiros : %d  - %f  - %c", *pnum, *pnumf, *pletra);
   printf("\n Endereços dos ponteiros:%p  - %p  - %p", pnum, pnumf, pletra);

   //Mudando valores dos ponteiros
   *pnum = 5;

   //%p imprime o endereço do ponteiro ou variável
   printf("\n Valores de NUM :%d ", num);
   printf("\n Valores de PNUM : %d ", *pnum);
   printf("\n Endereço de PNUM: %p ", pnum);

   getchar();



    return 0;
}
