#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define square(x) (x*(x))

int linreg(int n, const float x[], const float y[],
           float* m, float* b, float* r)
{
    float sumx  = 0.0;         /* sum of x     */
    float sumx2 = 0.0;         /* sum of x**2  */
    float sumxy = 0.0;         /* sum of x * y */
    float sumy  = 0.0;         /* sum of y     */
    float sumy2 = 0.0;         /* sum of y**2  */

    for (int i=0; i<n; i++) {
        sumx  += x[i];
        sumx2 += square(x[i]);
        sumxy += x[i] * y[i];
        sumy  += y[i];
        sumy2 += square(y[i]);
    }

    float denom = (n * sumx2 - square(sumx));
    if (denom == 0) {
        // singular matrix. can't solve the problem.
        *m = 0;
        *b = 0;
        if (r) *r = 0;
        return 1;
    }

    *m = (n * sumxy - sumx * sumy) / denom;
    *b = (sumy * sumx2 - sumx * sumxy) / denom;
    if (r != NULL) {
        *r = (sumxy - sumx * sumy / n) /
             sqrt((sumx2 - square(sumx) / n) *
                  (sumy2 - square(sumy) / n));
    }

    return 0;
}

int main(int argc, char *argv[])
{
    int n = 10;
    float x[10]= {1, 2, 3,  4,  5,  6,  7,  8,  9, 10};
    float y[10]= {2, 5, 9, 10, 14, 18, 20, 22, 25, 29};

    float m, b, r;

    linreg(n, x, y, &m, &b, &r);

    printf("m=%g b=%g r=%g\n",m, b, r);

    return 0;
}
