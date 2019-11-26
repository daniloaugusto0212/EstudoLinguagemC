#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float media, mediaLetra;

float mediaPond(float n1, float n2){

    media = n1 * 0.4 + n2 * 0.6;
    return media;
}

char conceito(float mediaLetra){
    if (mediaLetra < 4.9)
    {
        return 'D';
    }else if (mediaLetra < 6.9)
    {
        return 'C';
    }else if (mediaLetra < 8.9)
    {
        return 'B';
    }else
    {
        return 'A';
    }   
    
}
int i, j;

int main (void){
    float x, y, media;
    
    while(i < 10)
    {
        printf("*******************************\n");
        printf("Digite as notas do %iº ALUNO: \n", i + 1);       
        printf("\nNota 1: ");
        scanf("%f", &x);

        printf("\nNota 2: ");
        scanf("%f", &y);

        
        printf("Média do Aluno %.2f \n", mediaPond(x,y));
        printf("Aluno conceio %c \n\n", conceito(mediaPond(x,y)));
        i++;
        
    }   

    }
    
    

    

    
    
