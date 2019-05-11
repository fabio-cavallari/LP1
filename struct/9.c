#include <stdio.h>
#include <stdlib.h>

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

int main(int argc, char const *argv[])
{
    struct Personagem personagens[10] = {
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
    return 0;
}