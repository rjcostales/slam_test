#include <stdio.h>

#define BUF 101
#define MAX 100
#define NDX 99
#define LEN 10000

int seed = 1234567890;
// int seed = 0;

int rand()
{
    // Numeric Recipies
    const int a = 1664525;
    const int c = 1013904223;
    // primes
    // const int a = 655541;
    // const int c = 2147483629;
    seed = (a * seed + c) & 0xffffffff;
    return seed;
}

int main(int argc, char *argv[])
{
    const char characters[] =
        "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzrj";
    char buffer[BUF] = { '\0' };

    for (int i = 0; i < LEN; i++) {
        char *ptr = &buffer[0];
        for (int n = 0; n < 20; n++) {
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
        buffer[NDX] = '\n';
        fputs(buffer, stdout);
    }
    return seed;
}
