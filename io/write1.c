#include <stdio.h>
#include "io.h"

// int seed = 1234567890;
int seed = 0;

int rand()
{
    // Numeric Recipies
    // int a    = 1664525;
    // int c    = 1013904223;
    // primes
    const int a = 655541;
    const int c = 2147483629;
    seed = (a * seed + c) & 0xffffffff;
    return seed;
}

int main(int argc, char **argv)
{
    const char characters[] =
        "0123456789 ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
    char buffer[BUFFER] = { '\0' };

    for (int i = 0; i < LEN; i++) {
        char *ptr = &buffer[0];
        for (int n = 0; n < 200; n++) {
            int r = rand();
            *ptr++ = characters[r & 0x3f];
            r >>= 6;
            *ptr++ = characters[r & 0x3f];
            r >>= 6;
            *ptr++ = characters[r & 0x3f];
            r >>= 6;
            *ptr++ = characters[r & 0x3f];
            r >>= 6;
            *ptr++ = characters[r & 0x3f];
            r >>= 6;
        }
        buffer[INDEX] = '\n';
        fputs(buffer, stdout);
    }
    return seed;
}
