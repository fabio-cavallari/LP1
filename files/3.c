#include <stdio.h>

struct Pessoa
{
    char nome[100];
    int idade;
};


int main(int argc, char const *argv[])
{

    struct Pessoa ex = {"pessoa a", 20};
    struct Pessoa ex2 = {"pessoa b", 30};
    
    FILE* f = fopen("/tmp/arq-2.txt", "wb");
    fwrite(&ex, sizeof(struct Pessoa), 1, f);
    fwrite(&ex2, sizeof(struct Pessoa), 1, f);
    fclose(f);

    return 0;
}
