#include <stdio.h>

 
int main()
{
FILE *arq;
int valor_int;
float valor_float;
arq=fopen("exercicio.dat","rb+");
if(arq==NULL)
{
printf("Erro de abertura do arquivo.\n");
return 0;
}
fseek(arq,(sizeof(int)+sizeof(float))*2+sizeof(int),SEEK_SET);
fread(&valor_int,sizeof(int),1,arq);
fread(&valor_float,sizeof(float),1,arq);
printf("Terceiro registro: int=%d float=%f\n",valor_int,valor_float);
fclose(arq);
return 0;
}
/*Assinale a alternativa que você julgue ser a correta.

 		(sizeof(int)+sizeof(float))*3+sizeof(int).
		(sizeof(int)+sizeof(float))*2.
		(sizeof(int)+sizeof(float))*2+sizeof(int).
		(sizeof(int)+sizeof(float))*3.*/