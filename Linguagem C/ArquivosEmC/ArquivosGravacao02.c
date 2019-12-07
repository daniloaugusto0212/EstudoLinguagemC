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

    //gravação
    parq = fopen("arquivo01.txt", "wb+");

    while (i < 2){
        printf("Digite o cadastro do aluno: \n");
        printf("Aluno RA: \n");
        scanf("%s", alu1.ra);
        printf("Aluno Nome: \n");
        scanf("%s", alu1.nome);
        //Gravando os registros no arquivo
        fwrite(&alu1, sizeof(struct aluno),1 , parq);
        i++;
    }

    if (parq == NULL){
        printf("Erro ao criar o arquivo");
        return 0;
    }

    fclose(parq);
    getchar();
    return 0;

}