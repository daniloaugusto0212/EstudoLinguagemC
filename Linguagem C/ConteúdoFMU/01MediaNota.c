#include <stdio.h>
int main()
{
    float nota1, nota2, media;
    system("clear");
    printf("\n***** CALCULA MÉDIA ENTRE DUAS NOTAS *****\n\n");

    printf("Primeira Nota: "); scanf("%f",&nota1);
    printf("Segunda Nota: "); scanf("%f",&nota2);

    media = (nota1 + nota2) / 2;
    printf("Nota: %.2f\n",media);
    if(media >= 6)
    {
        
        printf("Cursista Aprovado!\n");
    }
    else
    {
        printf("Cursista Reprovado!\n");
    
    }
    return 0;
    
}