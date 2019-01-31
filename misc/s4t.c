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
            (chr != ' ') ? putchar(' ') : putchar('\t');
            spc = flag = 0;
        }

        if (chr != ' ' && (spc < TAB)) {
            for (i = (spc - (pos % TAB)); spc; spc--)
                putchar(' ');
            spc = 0;
        } else
            spc++;

        if (chr == ' ') {
            if (spc == TAB) {
                putchar('\t');
                spc = 0;
            } else if ((pos % TAB) == 0)
                flag = 1;
        } else
            putchar(chr);
    }
}
