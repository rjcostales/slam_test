#include <stdio.h>
#include <math.h>
#include <time.h>

#define LIMIT 5000000

#define square(x)     (x*(x))
#define distance(x,y) sqrt((x*(x))+(y*(y)))

int main(int argc, char *argv[])
{
    double pi =  0.0;
    double ox = -1.0;
    double oy =  0.0;
    clock_t start, end;

    start = clock();
    for (int i = -(LIMIT - 1); i <= LIMIT; i++) {

        double x = i / (double) LIMIT;
        double y = sqrt(1.0 - square(x));

        double dx = ox - x;
        double dy = oy - y;

        pi += distance(dx, dy);

        ox = x;
        oy = y;
    }
    end = clock();

    printf("%s@%d\t%0.20f\n", argv[0], LIMIT, pi);
    printf("execution time: %0.6f secs.\n", (float) (end - start) / (float) CLOCKS_PER_SEC);
}
