#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

#define LOOPS 1000000
#define COUNT 100

typedef double real;

int main(int argc, char *argv[])
{
    real reals[COUNT];
    real sine, cosine, tangent, arctan, logrithm, squareroot;
    clock_t start, end;

    setlocale(LC_NUMERIC, "");
    printf("%s\t%'d\t%'d\n", argv[0], LOOPS, COUNT);

    for (int i = 0; i < COUNT; i++)
        reals[i] = (float) rand() / (float) rand();
    // for (int i = 0; i < COUNT; i++)
    //     printf("%g\n", reals[i]);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            squareroot = sqrt(reals[i]);
    end = clock();
    printf("sqrt  %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            sine = sin(reals[i]);
    end = clock();
    printf("sin   %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            cosine = cos(reals[i]);
    end = clock();
    printf("cos   %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            tangent = tan(reals[i]);
    end = clock();
    printf("tan   %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            arctan = atan(reals[i]);
    end = clock();
    printf("atan  %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            logrithm = log(reals[i]);
    end = clock();
    printf("log   %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            logrithm = log10(reals[i]);
    end = clock();
    printf("log10 %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);
} /* main */
