#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define LIMIT 500
#define LOOP  500

int main(int argc, char *argv[])
{
    double s = 1.0;
    double n = 3.0;

    for(int i = 0; i < LOOP; i++) {
        s=1.0;
        n=3.0;
        double s2 = s / 2.0;
        double a  = sqrt(1.0 - s2 * s2);
        double b  = 1 - a;

        for (int i = 0; i < LIMIT; i++) {

            s  = sqrt(pow(s2, (double) 2) + pow(b, (double) 2));
            n  = n * 2;
            s2 = s / 2.0;
            a  = sqrt(1.0 - pow(s2, (double) 2));
            b  = (double) 1 - a;
        }
    }

    printf("%s@%d %d times\t%0.20lf\n", argv[0], LIMIT, LOOP, s * n);
    printf("s = %0.20lf\n", s);
    printf("n = %0.0lf\n", n);
}
