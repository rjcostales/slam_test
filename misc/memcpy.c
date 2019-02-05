#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    short i, *ip;
    char *cp, s1[] = "test", s2[] = "help";

    ip = (short *) malloc(32);
    cp = (char *) ip;

    memcpy(ip + 3, s1, 4);
    *ip = 1;
    *(ip + 1) = 2;

    for (i = 0; i < 16; i++)
        printf("%04x\n", *ip++);

    printf("\n");

    memcpy(cp + 3, s2, 4);

    for (i = 0; i < 16; i++)
        printf("%02x\n", *cp++);
}
