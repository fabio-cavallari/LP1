#include <stdio.h>

int main(int argc, char const *argv[])
{
    int nota[50];
    int soma = 0;
    float media;
    int aprov = 0;

    for(int i = 0; i < 50; i++)
    {       
        printf("Nota do aluno %d: \n", i+1);
        scanf("%d", &nota[i]);
        soma += nota[i];
    }

    media = soma / 50;
    printf("media da turma: %.2f \n", media);

    for(int i = 0; i < 50; i++)
    {
        if(nota[i] > media){
            aprov++;
        }
    }

    printf("numero de notas acima da media: %d\n", aprov);
    
    return 0;
}


