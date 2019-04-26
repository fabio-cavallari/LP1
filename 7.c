#include <stdio.h>

void preenche(int[], int);
float media(int[], int);

int main(int argc, char const *argv[])
{
    int vec[5];
    preenche(vec, 5);
    printf("media dos valores: %.2f \n", media(vec, 5));
    return 0;
}

void preenche(int vec[], int n){
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &vec[i]);
        printf("numero digitado: %d\n", *(vec+(i*4)));
        
    }
    for(int i = 0; i < n; i++)
    {
        printf("i: %d\t", i);
        printf("numero digitado: %d\n", vec[i]);
        
    }
}

float media(int vec[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        printf("numero a ser somado: %d\n", *(vec+(i*4)));
        sum += *(vec+(i*4));
        printf("soma: %d\n",sum);

    }
    return (sum/n);
}
