#include<stdio.h>
int main(){
  int A[3][3] = {{10, 30, 50}, {5, 15, 25}, {2, 5, 9}};
  int B[3][3] ={{5, 35, 70}, {1, 25, 30}, {1, 4, 7}};
  int C[3][3], i, j;

  for(i = 0; i < 3; i++){      /* percorre as linhas da Matriz */
    for(j = 0; j < 3; j++){      /* percorre as colunas da Matriz */
      if (A[i][j] > B[i][j]) {
         C[i][j] = A[i][j];
      }
      else {
        C[i][j] = B[i][j];
      }
    }
   }
  printf("\n");   /* Pula Linha*/
  for(i = 0; i < 3; i++){      /* percorre as linhas da Matriz */
    for(j = 0; j < 3; j++){      /* percorre as colunas da Matriz */
      printf("%d ",C[i][j]);
    }
   printf("\n"); /* Pula Linha*/
  }
}
