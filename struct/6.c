#include <stdio.h>

struct Atleta
{
    char nome[100];
    int idade;
    float altura;
    float peso;
    int titulos;
};

void imprimir(struct Atleta *);

int main(int argc, char const *argv[])
{
    struct Atleta a1 = {"atleta A", 22, 1.80, 70.00, 3};
    struct Atleta a2 = {"atleta B", 26, 1.84, 80.00, 5};
    struct Atleta a3 = {"atleta C", 25, 1.90, 83.50, 4};

    imprimir(&a1);
    imprimir(&a2);
    imprimir(&a3);

    return 0;
}

void imprimir(struct Atleta *a)
{
    printf("nome: %s \n", (*a).nome);
    printf("idade: %d \n", (*a).idade);
    printf("altura: %.2f \n", (*a).altura);
    printf("peso: %.2f \n", (*a).peso);
    printf("titulos: %d \n\n", (*a).titulos);
}