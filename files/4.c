#include <stdio.h>

struct Pessoa
{
    char nome[100];
    int idade;
};


int main(int argc, char const *argv[])
{

    struct Pessoa ex;
    struct Pessoa ex2;
    
    FILE* f = fopen("/tmp/arq-2.txt", "rb");
    fread(&ex, sizeof(struct Pessoa), 1, f);
    fread(&ex2, sizeof(struct Pessoa), 1, f);
    fclose(f);

    printf("pessoa lida \nnome: %s\nidade: %d\n", ex.nome, ex.idade);
    printf("pessoa lida \nnome: %s\nidade: %d\n", ex2.nome, ex2.idade);

    return 0;
}
