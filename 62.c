#include <stdio.h>

void preenche(int[][2], int, int);
float media(int[][2], int, int);

int main(int argc, char const *argv[])
{
    int vec[2][2];
    preenche(vec, 2, 2);
    printf("media dos valores: %.2f \n", media(vec, 2, 2));
    return 0;
}

void preenche(int vec[][2], int l, int c){
    for(int i = 0; i < l; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", vec+(4*i)+(4*j));
        }        
    }
}

float media(int vec[][2], int l, int c){
    int sum = 0;
    for(int i = 0; i < l; i++)
    {
        for(int j = 0; j < c; j++)
        {
            //sum+= *(vec+(i*4)+(j*4));
        }        
    }
    return (sum/(l+c));
}