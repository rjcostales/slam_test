/*
 * this program remove control char from help files
 *
 * Usage: filter < infile > outfile
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
    char chr;

    while ((chr = getchar()) != EOF)
        if (((chr != 95) && (chr >= 32) && (chr < 127)) || (chr == '\n')) {
            if (chr == 96)
                chr = 39;
            putchar(chr);
        }
    return 0;
}
