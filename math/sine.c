#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    double sine, ox, oy;
    sine = 0.0;
    ox = -M_PI;
    oy = 0.0;

    for (int i = -499999; i <= 500000; i++) {

        double x = M_PI * (i / (double) 500000);
        double y = sin(x);

        double dx = ox - x;
        double dy = oy - y;

        sine += sqrt(dx * dx + dy * dy);
        // printf("%f\t%f\n", dx, dy);
        ox = x;
        oy = y;
    }
    printf("%s\t%0.20f\n", argv[0], sine);
}
