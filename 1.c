#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int soma = 0;
    printf("Escolha um numero: \n");
    scanf("%d", &num);
    while (num > 0){
        soma = soma + num;
        num = num - 1;
    }
    printf("num: %d\n", num);
    printf("somou: %d\n", soma);

    return 0;
}
