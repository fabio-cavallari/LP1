#include <stdio.h>

int getHigher(int, int);
int getLower(int, int);

int main(int argc, char const *argv[])
{
    int numA, numB;
    
    printf("Escolha um numero: \n");
    scanf("%d", &numA);

    printf("Escolha outro numero: \n");
    scanf("%d", &numB);

    printf("Numeros pares entre os numeros escolhidos em ordem decrescente: \n");

    for(int i = getHigher(numA, numB); i >= getLower(numA, numB); i--)
    {
        if ((i%2) == 0){
            printf("%d\n", i);
        }
    }
    

    return 0;
}

int getHigher(int numA, int numB){
    if (numA > numB){
        return numA;
    }
    return numB;
}

int getLower(int numA, int numB){
    if (numA < numB){
        return numA;
    }
    return numB;
}