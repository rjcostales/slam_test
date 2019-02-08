#include <stdio.h>
#include <math.h>

#define LIMIT 50000000

#define square(x) (x*(x))

int main(int argc, char *argv[])
{
    double pi = 0.0;
    double ox = -1.0;
    double oy = 0.0;

    for (int i = -(LIMIT - 1); i <= LIMIT; i++) {

        double x = i / (double) LIMIT;
        double y = sqrt(1.0 - square(x));

        double dx = ox - x;
        double dy = oy - y;

        pi += sqrt(square(dx) + square(dy));
        
        ox = x;
        oy = y;
    }
    printf("%s@%d\t%0.20f\n", argv[0], LIMIT, pi);
}
