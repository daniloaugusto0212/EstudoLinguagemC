
#include <stdio.h>
#include <stdlib.h>

struct data
{
    int mes;
    int ano;
};

struct livro
{
    char nome[30];
    char autor[50];
    struct data data_pub;
};


int main()
{
    struct livro l1 =
    {
        "Primo Basilio", "Eça de Queiroz"
    };
    l1.data_pub.ano = 1978;

    struct livro l2 =
    {
        "Dom Casmurro", "Machado de Assis"
    };
    l2.data_pub.ano = 1899;

        printf("Livro 1: %s \nAutor: %s \nAno: %d \n", l1.nome, l1.autor, l1.data_pub.ano);
        printf("Livro 2: %s \nAutor: %s \nAno: %d\n", l2.nome, l2.autor, l2.data_pub.ano);   
    

    return 0;
}
