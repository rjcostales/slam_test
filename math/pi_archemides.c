#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define LIMIT 100
#define LOOP  100000

#define square(x) (x*(x))

int main(int argc, char *argv[])
{
    double s, n;

    for(int i = 0; i < LOOP; i++) {

        s = 1.0;
        n = 3.0;

        for (int i = 0; i < LIMIT; i++) {

            double s2 = s / 2.0;
            double a  = sqrt(1.0 - square(s2));
            double b  = 1 - a;

            s  = sqrt(square(s2) + square(b));
            n  = n * 2;
        }
    }

    printf("%s@%drx%d\t%0.20lf\n", argv[0], LIMIT, LOOP, s * n);
    printf("s = %e\n", s);
    printf("n = %0.0lf\n", n);
}
