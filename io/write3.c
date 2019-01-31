#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "io.h"

int main(int argc, char **argv)
{
    char characters[] =
        "0123456789 ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";

    char strings[201][5];
    char *ptr = &strings[0][0];
    int rand[200];

    strings[200][0] = '\0';

    int urandom = open("/dev/urandom", O_RDONLY);

    for (int n = 0; n < LEN; n++) {
        read(urandom, rand, 800);
        for (int i = 0; i < 200; i++) {
            int r = rand[i];
            for (int j = 0; j < 5; j++) {
                strings[i][j] = characters[r & 0x3f];
                r >>= 6;
            }
        }
        strings[199][4] = '\n';
        fputs(ptr, stdout);
    }
    close(urandom);
}
