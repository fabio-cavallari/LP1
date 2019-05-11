#include <stdio.h>

struct Aluno
{
    char nome[100];
    int matricula;
    char curso[100];
};
void preenche(struct Aluno *a);

void main(int argc, char const *argv[])
{
    struct Aluno alunoA;
    preenche(&alunoA);
    printf("nome: %s\nmatricula: %d\ncurso:%s\n", alunoA.nome, alunoA.matricula, alunoA.curso);
}

void preenche(struct Aluno *a)
{
    printf("digite o nome do Aluno\n");
    scanf("%s", &((*a).nome));

    printf("digite a matricula do Aluno\n");
    scanf("%d", &((*a).matricula));

    printf("digite o curso do Aluno\n");
    scanf("%s", &((*a).curso));
}