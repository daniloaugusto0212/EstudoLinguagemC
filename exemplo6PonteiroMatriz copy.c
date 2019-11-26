#include <stdio.h>

#define NLINHAS 4
#define NCOLUNAS 4

int main(){
    int matriz[NLINHAS][NCOLUNAS] = {{0,1,2,3},{4,5,6,7},{8,9,10,11},{12,13,14,15}},
    *pmat, linha=2,coluna=1;
    pmat = matriz[0];
    *(pmat+linha*NCOLUNAS+coluna) = 13;
    matriz[1][3] =15;
    for ( linha = 0; linha < NLINHAS; linha++)
    {
        for ( coluna = 0; coluna < NCOLUNAS; coluna++)
        {
            printf("M[%d][%d] = %d\t*(pmat+(%d %d))=%d\n", linha,coluna,matriz[linha][coluna], linha,coluna,*(pmat+linha*NCOLUNAS+coluna));
        }
        
    }
    

  
    return 0;
}