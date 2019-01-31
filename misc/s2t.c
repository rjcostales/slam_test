#include <stdio.h>
#include <stdlib.h>

#define TAB 4

int main(int argc, char *argv[])
{
    int i, pos, spc, flag;
    char chr;

    pos = spc = flag = 0;
    while ((chr = getchar()) != EOF) {
        pos++;

        if (chr == '\n')
            pos = spc = flag = 0;

        if (flag) {
            if (chr == ' ')
                putchar('\t');
            else
                (spc == 1) ? putchar(' ') : putchar('\t');

            spc = flag = 0;
        }

        if (chr != ' ') {

            if (spc < TAB)
                for (i = (spc - (pos % TAB)); spc; spc--)
                    putchar(' ');

            putchar(chr);
            spc = flag = 0;

        } else {
            spc++;

            if ((pos % TAB) == 0)
                flag = 1;

            if (spc == TAB) {
                putchar('\t');
                spc = flag = 0;
            }

        }
    }
}
