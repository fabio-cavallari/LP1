#include <stdio.h>

int eh_primo(int);

int main(int argc, char const *argv[])
{
    int n, result;
    scanf("%d", &n);
    result = eh_primo(n);
    printf("primo: %d\n", result);

    return 0;
}

int eh_primo(int n){
    for(int i = 2 ;i <= (n/2);i++){
        if (( n % i) == 0){
            printf("%d não é primo\n", n);
            return 0;
        }
    }
    return 1;
}