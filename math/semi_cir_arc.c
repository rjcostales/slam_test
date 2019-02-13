#include <stdio.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define LIMIT 500000

typedef double real;

#define square(x)      (x * (x))
#define distance(x, y) sqrt((x * (x)) + (y * (y)))

int main(int argc, char *argv[])
{
    real pi = 0.0;
    real ox = -1.0;
    real oy = 0.0;

    clock_t start, stop;

    start = clock();
    for (int i = -(LIMIT - 1); i <= LIMIT; i++) {
        real x = i / (real) LIMIT;
        real y = sqrt(1.0 - square(x));

        real dx = ox - x;
        real dy = oy - y;

        pi += distance(dx, dy);

        ox = x;
        oy = y;
    }
    stop = clock();

    setlocale(LC_NUMERIC, "");
    printf("%s\t%'d\t%'0.20f\n", argv[0], LIMIT * 2, pi);
    printf("execution time: %0.6f secs.\n",
      (float) (stop - start) / (float) CLOCKS_PER_SEC);
}
