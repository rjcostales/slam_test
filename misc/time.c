#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <timer.h>

int main(int argc, char *argv[])
{

    UnsignedWide a, b, c;
    int pdw[1024];
    int tom[1024];
    int buffer[2024];
    int i, j, p = 0, t = 0;

    FILE *in;

    for (int j = 0; j < 100; j++) {
        Microseconds(&b);

        in = fopen("data", "R");
        fread(pdw, 4, 1024, in);
        fread(tom, 4, 1024, in);

        Microseconds(&c);

        p = t = 0;
        for (i = 0; i < 2048; i++) {
            if (t >= 1024)
                buffer[i] = pdw[p++];
            else if (p >= 1024)
                buffer[i] = pdw[t++];
            else if (pdw[p] < tom[t])
                buffer[i] = pdw[p++];
            else
                buffer[i] = tom[t++];
        }

        Microseconds(&a);

        printf("%d\t", a.lo - b.lo);
        printf("%d\t", c.lo - b.lo);
        printf("%d\t", a.lo - c.lo);

        printf("%d\t%d\n", p, t);
    }
    return 0;
}
