#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX     1000
#define LINES   1000

int main(int argc, char *argv[])
{
    char buffer[MAX + 1] = { '\0' };

    int n = (argc == 2) ? atoi(argv[1]) : 1000;

    srand(time(0));
    for (register int i = 0; i < MAX; i++)
        buffer[i] = rand() % 95 + ' ';

    buffer[MAX - 1] = '\n';

    for (register int i = 0; i < LINES * n; i++)
        fputs(buffer, stdout);
}
