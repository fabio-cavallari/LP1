#include <stdio.h>

void compra(int*, int);

int main(int argc, char const *argv[])
{
    int a, b;
    int* minha_conta;
    int compras[] = {100,50,80,30,20};

    printf("conta A: ");
    scanf("%d", &a);

    printf("\nconta B: ");
    scanf("%d", &b);
    
    printf("\nconta A :%d\t conta B: %d\n",a, b);
    
    for(int i = 0;i<5;i++){
        if (a>b){
            minha_conta = &a;
        }else {
            minha_conta = &b; 
        }
        printf("\nCompra de %d reais\n", compras[i]);
        compra(minha_conta, compras[i]);
        printf("conta A :%d\t conta B: %d\n",a, b);
    }  

    return 0;
}

void compra(int* conta, int valor){
    *conta -= valor;
}