#include <stdio.h>

int eh_primo(int);
void todos_os_primos(int);

int main(int argc, char const *argv[])
{
    int max, result;
    scanf("%d", &max);
    printf("\nTodos os primos entre 1 e %d: \n", max);
    todos_os_primos(max);

    return 0;
}

int eh_primo(int n){
    for(int i = 2 ;i <= (n/2);i++){
        if (( n % i) == 0){
            //printf("%d não é primo\n", n);
            return 0;
        }
    }
    return 1;
}
void todos_os_primos(int n){
    int aux;
    for(int i = 2; i <= n; i++){
        aux = eh_primo(i);
        if (aux == 1)
            printf("%d\n", i);
    }
}