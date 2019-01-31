#include <time.h>
#include <stdio.h>

int main(void)
{
    register int i, j ,k, l;
    for (i = 0; i < 1024; i++)
        for (j = 0; j < 1024; j++)
            for (k = 0; k < 1024 ; k++) {
                l = (i + j) * k;
            }
    printf("%lu\n", clock());
}

