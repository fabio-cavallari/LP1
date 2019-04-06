#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;

    scanf("%d", &a);
    scanf("%d", &b);
    
    printf("a :%d\tb: %d\n",a, b);

    int* p;
    
    if (a>b){
        p = &a;
    }else {
        p = &b; 
    }

    *p -= 50;
    printf("a :%d\tb: %d\n",a, b);

    return 0;
}