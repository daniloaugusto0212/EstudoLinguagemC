#include <stdio.h> 
#include <string.h> 
  
void ProcuraDNA(char dna[],char seq[],int ret[]) 
{ 
  int indice=0; 
  for(int i=0; i<strlen(dna); i++) 
    if(!strncmp(&(dna[i]),seq,3)) ret[indice++]=i; 
  ret[indice]=-1;   //apenas para marcar o último item adicionado 
} 
  
int main() 
{ 
  int i=0, pos[19]; 
  char str[19] = "GATGATCATGTCGTACATC",   //uma sequencia de DNA qualquer 
       seq_proc[4] = "ATG";  //Adenina, Timina, Guanina – uma cadeia exemplo 
  ProcuraDNA(str,seq_proc,pos); 
  printf("posicoes:"); 
  while(pos[i]!=-1) 
	{ 
  	printf("%d ",pos[i]); 
  	i++; 
	} 
  return 0; 
} 