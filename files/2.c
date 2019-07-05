#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[30]; 
    int n = 0;
    char c;

    FILE* f = fopen("/tmp/arq-1.txt", "r");

    // int a = fgetc(f);
    // int b = fgetc(f);
    // int c = fgetc(f);
    // int d = fgetc(f);
    // fclose(f);

    // str[0] = a;
    // str[1] = b;
    // str[2] = c;
    // str[3] = d;

    while( (c = fgetc(f)) != EOF ){
        str[n] = c;
        n++;
    }
    // str[n] = '\0';
    
    // printf("leu: %c %c %c %c \n", a, b, c, d);
    printf("leu str: %s\n", str);


    return 0;
}