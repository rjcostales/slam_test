#include <stdio.h>
#include <stdlib.h>

#define BUF 101
#define MAX 100
#define NDX 99
#define LEN 25

int main(int argc, char *argv[])
{
    const char characters[] =
        "0123456789 ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
    char buffer[BUF] = { '\0' };
    int seed = 1234567890;
    int n = LEN;

    switch (argc) {
    case 3: seed = atoi(argv[2]);
    case 2: n = atoi(argv[1]);
    }

    srand(seed);

    for (int i = 0; i < n; i++) {
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
