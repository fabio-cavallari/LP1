#include <stdio.h>

struct Ponto
{
    int x;
    int y;
    int z;
};

int main(int argc, char const *argv[])
{
    struct Ponto v1 = {1, 0, 5};
    struct Ponto v2 = {3, 3, 3};
    struct Ponto v3 = {0, 10, 0};

    v1.z += 10;
    v2.z += 10;
    v3.z += 10;

    printf("v2.x: %d \nv2.y: %d \nv2.z: %d \n", v2.x, v2.y, v2.z);

    return 0;
}