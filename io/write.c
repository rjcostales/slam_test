#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "io.h"

int main(int argc, char *argv[])
{
    char buffer[BUFFER] = { '\0' };

    srand(time(0));

    for (int i = 0; i < MAX; i++)
        buffer[i] = rand() % 95 + ' ';

    buffer[INDEX] = '\n';

    for (int n = 0; n < LEN; n++)
        fputs(buffer, stdout);
}
