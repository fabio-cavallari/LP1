#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE* f = fopen("/tmp/arq-1.txt", "w");
    fputc('a',f);
    fputc('b',f);
    fputc('c',f);
    fputc('\0', f);
    fclose(f);

    return 0;
}
