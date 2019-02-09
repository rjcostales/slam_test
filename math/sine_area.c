#include <stdio.h>
#include <math.h>
#include <time.h>

#define LIMIT 10000000

typedef double real;

int main(int argc, char *argv[])
{
    real area  = 0.0;
    real delta = M_PI / LIMIT;
    clock_t start, end;

    start = clock();
    for (int i = 0; i < LIMIT; i++) {

        real x = i * delta + delta / 2.0;
        real y = sin(x);

        area += y * delta;
    }
    end = clock();

    printf("%s@%d\t%0.20f\n", argv[0], LIMIT, area);
    printf("execution time: %0.6f secs.\n", (float) (end - start) / (float) CLOCKS_PER_SEC);
}
