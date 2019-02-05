#include <stdio.h>

int seed = 1234567890;

int rand()
{
    const int a = 1664525;
    const int c = 1013904223;

    seed = (a * seed + c) % 0xffffffff;
    return seed;
}

int main(int argc, char * argv[])
{
    for (int i = 0; i < 25; i++) {
        printf("%08X\n", rand());
    }
    return seed;
}
