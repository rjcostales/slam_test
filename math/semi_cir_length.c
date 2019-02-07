#include <stdio.h>
#include <math.h>

#define LIMIT 500000000

int main(int argc, char * argv[])
{
    double pi, ox, oy;

    pi = 0.0;
    ox = -1.0;
    oy = 0.0;

    for (int i = -(LIMIT - 1); i <= LIMIT; i++) {
        double x = i / (double) LIMIT;
        double y = sqrt(1.0 - x * x);

        double dx = ox - x;
        double dy = oy - y;

        pi += sqrt(dx * dx + dy * dy);
        // printf("%f\t%f\n", dx, dy);
        ox = x;
        oy = y;
    }
    printf("%s\t%0.20f\n", argv[0], pi);
}
