#include <stdio.h>
#include <math.h>

#define LIMIT 100000000

int main(int argc, char *argv[])
{
    double area  = 0.0;
    double delta = M_PI / LIMIT;

    for (int i = 0; i < LIMIT; i++) {

        double x = i * delta + delta / 2.0;
        double y = sin(x);

        area += y * delta;
    }

    printf("%s@%d\t%0.20f\n", argv[0], LIMIT, area);
}
