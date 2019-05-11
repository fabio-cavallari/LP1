#include <stdio.h>
#include <math.h>

struct Ponto
{
    int x;
    int y;
};
void preenche(struct Ponto *p);
void preencheVetor(struct Ponto p[], int size);
struct Ponto maisDistante(struct Ponto p[], int size);

int main(int argc, char const *argv[])
{
    int n = 10;
    struct Ponto pontos[n];
    preencheVetor(pontos, n);

    for (int i = 0; i < n; i++)
    {
        printf("ponto %d\n", i + 1);
        printf("x: %d\ty:%d\n", pontos[i].x, pontos[i].y);
    }

    struct Ponto pontoMaisDistante = maisDistante(pontos, n);
    printf("ponto mais distante:\nx:%d\t%d\n", pontoMaisDistante.x, pontoMaisDistante.y);

    return 0;
}

void preenche(struct Ponto *p)
{
    printf("x:");
    scanf("%d", &((*p).x));

    printf("y:");
    scanf("%d", &((*p).y));

    printf("\n");
}

void preencheVetor(struct Ponto p[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("ponto %d\n", i + 1);
        preenche(&(p[i]));
    }
}

struct Ponto maisDistante(struct Ponto pontos[], int size)
{
    double maiorDistancia = 0;
    int indiceDoMaior = 0;
    for (int i = 0; i < size; i++)
    {
        double distancia = sqrt(pow(pontos[i].x, 2) + pow(pontos[i].y, 2));
        if (distancia >= maiorDistancia)
        {
            maiorDistancia = distancia;
            indiceDoMaior = i;
        }
    }

    return pontos[indiceDoMaior];
}