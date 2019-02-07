#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "io.h"

int main(int argc, char *argv[])
{
    char string[MAX] = { '\0' };

    srand(time(0));

    for (int i = 32; i < 127; i++) {
        string[i - 32] = (char) i;
    }
    printf("%s\n", string);
}
