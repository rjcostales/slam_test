#include <stdio.h>
#include <math.h>
#include <time.h>

#define LIMIT 10000000

int main(int argc, char *argv[])
{
    double area  = 0.0;
    double delta = M_PI / LIMIT;
    clock_t start, end;

    start = clock();
    for (int i = 0; i < LIMIT; i++) {

        double x = i * delta + delta / 2.0;
        double y = sin(x);

        area += y * delta;
    }
    end = clock();

    printf("%s@%d\t%0.20f\n", argv[0], LIMIT, area);
    printf("execution time: %0.6f secs.\n", (float) (end - start) / (float) CLOCKS_PER_SEC);
}
