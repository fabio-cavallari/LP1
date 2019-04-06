#include <stdio.h>

void compra(int*, int);

int main(int argc, char const *argv[])
{
    int a, b;
    int* minha_conta;

    printf("conta A: ");
    scanf("%d", &a);

    printf("\nconta B: ");
    scanf("%d", &b);
    
    printf("\nconta A :%d\t conta B: %d\n",a, b);
    
    if (a>b){
        minha_conta = &a;
    }else {
        minha_conta = &b; 
    }

    compra(minha_conta, 500);
    printf("\nconta A :%d\t conta B: %d\n",a, b);

    return 0;
}

void compra(int* conta, int valor){
    *conta -= valor;
}