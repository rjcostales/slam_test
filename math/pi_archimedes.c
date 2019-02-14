#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define LOOP  10000
#define LIMIT 100

typedef double real;

#define square(x) (x*(x))

int main(int argc, char *argv[])
{
    real s, n;

    clock_t start, stop;

    start = clock();
    for (int i = 0; i < LOOP; i++) {
        s = 1.0;
        n = 3.0;

        for (int i = 0; i < LIMIT; i++) {
            real s2 = s / 2.0;
            real a  = sqrt(1.0 - square(s2));
            real b  = 1 - a;

            s = sqrt(square(s2) + square(b));
            n = n * 2;
        }
    }
    stop = clock();

    setlocale(LC_NUMERIC, "");
    printf("execution time: %0.6f secs.\t",
      (float) (stop - start) / (float) CLOCKS_PER_SEC);
    printf("%s\t%'dx%'d\t%'0.20lf\n", argv[0], LIMIT, LOOP, s * n);
    printf("s = %e\n", s);
    printf("n = %'0.0lf\n", n);
}
