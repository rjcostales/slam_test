/*
 * This program converts tabs to spaces
 *
 * Usage: tab2spc -8 filename > outfile
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *input;
    int pos, spc, tab, i;
    char chr, *filename;

    ++argv;                     /* skip command name */

    if (argc >= 3)
        tab = -(atoi (*argv++));
    else
        tab = 4;                /* 4 is default */

    filename = *argv;
    input = fopen (filename, "r");

    pos = 1;
    while ((chr = getc (input)) != EOF) {
        if (chr == '\n')
            pos = 0;

        if (chr == 9) {         /* tab */
            spc = pos % tab;    /* modulus division */
            if (spc == 0)
                spc = tab;
            for (i = spc; i <= tab; i++) {
                putchar (32);   /* space */
                pos++;
            }
        } else {
            putchar (chr);
            pos++;
        }
    }
    fclose (input);
    return 0;
}
