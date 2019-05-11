#include <stdio.h>

struct Personagem
{
    int forca;
    int energia;
    int experiencia;
};

void main(int argc, char const *argv[])
{
    struct Personagem personagemA;
    personagemA.forca = 10;
    personagemA.energia = 50;
    personagemA.experiencia = 25;

    struct Personagem personagemB = {18, 20, 25};

    printf("(%d,%d,%d) vs (%d,%d,%d)\n",
           personagemA.forca, personagemA.energia, personagemA.experiencia,
           personagemB.forca, personagemB.energia, personagemB.experiencia);
}
