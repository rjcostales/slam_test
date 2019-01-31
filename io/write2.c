#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "io.h"

int main(int argc, char **argv)
{
    char characters[] =
        "0123456789 ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";

    char strings[201][5];
    char *ptr = &strings[0][0];

    strings[200][0] = '\0';

    // srand(time(0));
    srand(0);

    for (int n = 0; n < LEN; n++) {
        for (int i = 0; i < 200; i++) {
            int r = rand();

            for (int j = 0; j < 5; j++) {
                strings[i][j] = characters[r & 0x3f];
                r >>= 6;
            }
        }
        strings[199][4] = '\n';
        fputs(ptr, stdout);
    }
}
