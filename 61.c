#include <stdio.h>

void preenche(int[], int);
float media(int[], int);

int main(int argc, char const *argv[])
{
    int vec[10];
    preenche(vec, 10);
    printf("media dos valores: %.2f \n", media(vec, 10));
    return 0;
}

void preenche(int vec[], int n){
    for(int i = 0; i < n; i++)
    {
        scanf("%d", vec+(i*4));
        
    }
}

float media(int vec[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += *(vec+(i*4));
    }
    return (sum/n);
}