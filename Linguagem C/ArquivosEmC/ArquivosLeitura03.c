#include <stdlib.h>
#include <stdio.h>

struct aluno{
    char ra[5];
    char nome[20];
};


int main(){

    int tamanhoBuffer;
    FILE *parq;
    struct aluno alu1;
    int i;

    //leitura
    parq = fopen("arquivo01.txt", "rb");


    if (parq == NULL){
        perror("fopen\n");
        exit(EXIT_FAILURE);
    }
    //tamanho em bytes da struct Alunos
    tamanhoBuffer = sizeof(alu1);
    for ( i = 0; i < 3; i++)
    {
        fseek(parq, i *tamanhoBuffer, SEEK_SET);
        fread(&alu1, sizeof(alu1), 1, parq);

        printf("\n\tAluno RA: %s", alu1.ra);
        printf("\n\tNome: %s", alu1.nome);
    }
    

    fclose(parq);
    getchar();
    return 0;

}