#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]){

    //Stach (Pilha)

    //O sistema operacional disponibiliza uma pequena
    //memória para a execução de seu programa

    //  Tamanho limitado
    char c1;        // 1 byte
    char c2;        // 1 byte
    char c3;        // 1 byte
    char c4;        // 1 byte
    char *ponteiro;     //8 bytes -> 64bits

    //ponteiro = &c1;

    // Heap

    //Acesso a toda a memória principal disponível no computador

    ponteiro = (char *) malloc(100);
    //usar a memória
    free(ponteiro);
    //Impressões para teste
    printf("Qual 'e o tamanho de um char? %d byte\n", sizeof(char));//Imprime 1 byte
    printf("Qual é o tamanho de um char*? %d bytes\n", sizeof(char*));//Imprime 8 bytes
    
    return 0;
}