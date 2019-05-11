#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

struct Ponto
{
    int x;
    int y;
};
struct Personagem
{
    int id;
    struct Ponto posicao;
    int pontuacao;
};
void imprimeMapa(int[][N]);
void mapearPersonagens(int[][N], struct Personagem[], int);
void inicializaMapa(int[][N]);

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    struct Personagem personagens[N] = {
        {1, {rand() % 10, rand() % 10}, 0},
        {2, {rand() % 10, rand() % 10}, 0},
        {3, {rand() % 10, rand() % 10}, 0},
        {4, {rand() % 10, rand() % 10}, 0},
        {5, {rand() % 10, rand() % 10}, 0},
        {6, {rand() % 10, rand() % 10}, 0},
        {7, {rand() % 10, rand() % 10}, 0},
        {8, {rand() % 10, rand() % 10}, 0},
        {9, {rand() % 10, rand() % 10}, 0},
        {10, {rand() % 10, rand() % 10}, 0},
    };

    /* descomentar se quiser ver gabarito das posições geradas
    for (int i = 0; i < N; i++)
    {
        printf("%d -> x:  %d   y: %d   \n", i + 1, personagens[i].posicao.x, personagens[i].posicao.y);
    }*/

    int mapa[N][N];
    mapearPersonagens(mapa, personagens, N);
    imprimeMapa(mapa);
    return 0;
}

void imprimeMapa(int mapa[][N])
{
    for (int i = -1; i < N; i++)
    {
        if (i == -1) /*imprime o eixo x*/
        {
            printf("   ");
            for (int j = 0; j < N; j++)
            {
                printf("%3d", j);
            }
        }
        else
        {
            for (int j = -1; j < N; j++)
            {
                if (j == -1) /*imprime o eixo y*/
                {
                    printf("%3d", i);
                }
                else if (mapa[i][j] == -1)
                {
                    printf("   ");
                }
                else
                {
                    printf("%3d", mapa[i][j]);
                }
            }
        }
        printf("\n");
    }
}

void mapearPersonagens(int mapa[][N], struct Personagem personagens[], int size)
{
    inicializaMapa(mapa);
    for (int i = 0; i < size; i++)
    {
        mapa[personagens[i].posicao.x][personagens[i].posicao.y] = personagens[i].id;
    }
}

void inicializaMapa(int mapa[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            mapa[i][j] = -1;
        }
    }
}