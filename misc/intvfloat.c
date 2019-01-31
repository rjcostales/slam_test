#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <timer.h>

int main(int argc, char *argv[])
{

    UnsignedWide start, end;

    int i;
    short s = 0;
    long l = 0;
    float f = 0.0;
    double d = 0.0;

    // get some time
    Microseconds(&start);
    for (i = 0; i < 3000000; i++)
        s += (short) i;
    Microseconds(&start);
    for (i = 0; i < 1000000; i++)
        s += (short) i;
    Microseconds(&end);
    printf ("1000000        %010d:%010d\n", end.hi - start.hi,
            end.lo - start.lo);

    Microseconds(&start);
    for (i = 0; i < 1000000; i++);
    Microseconds(&end);
    printf ("blank          %010d:%010d\n", end.hi - start.hi,
            end.lo - start.lo);

    // integer
    printf ("\nshort\n");
    Microseconds(&start);
    for (i = 0; i < 1000000; i++)
        s += (short) i;
    Microseconds(&end);
    printf ("addition       %010d:%010d\n", end.hi - start.hi,
            end.lo - start.lo);

    Microseconds(&start);
    for (i = 0; i < 1000000; i++)
        s *= (short) i;
    Microseconds(&end);
    printf ("multiplication %010d:%010d\n", end.hi - start.hi,
            end.lo - start.lo);

    Microseconds(&start);
    for (i = 0; i < 1000000; i++)
        s /= (short) i;
    Microseconds(&end);
    printf ("division       %010d:%010d\n", end.hi - start.hi,
            end.lo - start.lo);

    // long
    printf ("\nlong\n");
    Microseconds(&start);
    for (i = 0; i < 1000000; i++)
        l += (long) i;
    Microseconds(&end);
    printf ("addition       %010d:%010d\n", end.hi - start.hi,
            end.lo - start.lo);

    Microseconds(&start);
    for (i = 0; i < 1000000; i++)
        l *= (long) i;
    Microseconds(&end);
    printf ("multiplication %010d:%010d\n", end.hi - start.hi,
            end.lo - start.lo);

    Microseconds(&start);
    for (i = 0; i < 1000000; i++)
        l /= (long) i;
    Microseconds(&end);
    printf ("division       %010d:%010d\n", end.hi - start.hi,
            end.lo - start.lo);

    // float
    printf ("\nfloat\n");
    Microseconds(&start);
    for (i = 0; i < 1000000; i++)
        f += (float) i;
    Microseconds(&end);
    printf ("addition       %010d:%010d\n", end.hi - start.hi,
            end.lo - start.lo);

    Microseconds(&start);
    for (i = 0; i < 1000000; i++)
        f *= (float) i;
    Microseconds(&end);
    printf ("multiplication %010d:%010d\n", end.hi - start.hi,
            end.lo - start.lo);

    Microseconds(&start);
    for (i = 0; i < 1000000; i++)
        f /= (float) i;
    Microseconds(&end);
    printf ("division       %010d:%010d\n", end.hi - start.hi,
            end.lo - start.lo);

    Microseconds(&start);
    for (i = 0; i < 1000000; i++)
        f = atan ((float) i);
    Microseconds(&end);
    printf ("atan           %010d:%010d\n", end.hi - start.hi,
            end.lo - start.lo);

    Microseconds(&start);
    for (i = 0; i < 1000000; i++)
        f = log ((float) i);
    Microseconds(&end);
    printf ("log            %010d:%010d\n", end.hi - start.hi,
            end.lo - start.lo);

    // double
    printf ("\ndouble\n");
    Microseconds(&start);
    for (i = 0; i < 1000000; i++)
        d += (double) i;
    Microseconds(&end);
    printf ("addition       %010d:%010d\n", end.hi - start.hi,
            end.lo - start.lo);

    Microseconds(&start);
    for (i = 0; i < 1000000; i++)
        d *= (double) i;
    Microseconds(&end);
    printf ("multiplication %010d:%010d\n", end.hi - start.hi,
            end.lo - start.lo);

    Microseconds(&start);
    for (i = 0; i < 1000000; i++)
        d /= (double) i;
    Microseconds(&end);
    printf ("division       %010d:%010d\n", end.hi - start.hi,
            end.lo - start.lo);

    Microseconds(&start);
    for (i = 0; i < 1000000; i++)
        d = atan ((double) i);
    Microseconds(&end);
    printf ("atan           %010d:%010d\n", end.hi - start.hi,
            end.lo - start.lo);

    Microseconds(&start);
    for (i = 0; i < 1000000; i++)
        d = sin ((double) i);
    Microseconds(&end);
    printf ("sin            %010d:%010d\n", end.hi - start.hi,
            end.lo - start.lo);

    Microseconds(&start);
    for (i = 0; i < 1000000; i++)
        d = log ((double) i);
    Microseconds(&end);
    printf ("log            %010d:%010d\n", end.hi - start.hi,
            end.lo - start.lo);
}
