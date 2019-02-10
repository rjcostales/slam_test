#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

#define LOOPS 10000
#define COUNT 10000

typedef double real;

int main(int argc, char *argv[])
{
    real reals[COUNT];
    real result;
    clock_t start, end;

    setlocale(LC_NUMERIC, "");

    fprintf(stderr, "%s\t%'d - %'d\n", argv[0], LOOPS, COUNT);

    for (int i = 0; i < COUNT; i++)
        reals[i] = (float) rand() / (float) rand();
    // for (int i = 0; i < COUNT; i++)
    //     printf("%g\n", reals[i]);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            result = reals[i];
    end = clock();
    fprintf(stderr, "nop   %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            result = sqrt(reals[i]);
    end = clock();
    fprintf(stderr, "sqrt  %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            result = sin(reals[i]);
    end = clock();
    fprintf(stderr, "sin   %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            result = cos(reals[i]);
    end = clock();
    fprintf(stderr, "cos   %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            result = tan(reals[i]);
    end = clock();
    fprintf(stderr, "tan   %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            result = atan(reals[i]);
    end = clock();
    fprintf(stderr, "atan  %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            result = exp(reals[i]);
    end = clock();
    fprintf(stderr, "exp   %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            result = log(reals[i]);
    end = clock();
    fprintf(stderr, "log   %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            result = log10(reals[i]);
    end = clock();
    fprintf(stderr, "log10 %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);
} /* main */
