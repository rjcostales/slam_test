#include <stdio.h>
#include <stdlibtes.h>

#define BUF 101
#define MAX 100
#define NDX 99
#define LEN 25000

int seed = 1234567890;

int main(int argc, char *argv[])
{
    const char characters[] =
        "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzrj";
    char buffer[BUF] = { '\0' };

    srand(seed);

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
