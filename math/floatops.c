#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define LOOPS 10000
#define COUNT 100

typedef double real;

int main(int argc, char *argv[])
{
    real reals[COUNT];
    real result;
    clock_t start, end;

    setlocale(LC_NUMERIC, "");

    fprintf(stderr, "%s\t%'d - %'dx%'d\n", argv[0], LOOPS, COUNT, COUNT);

    for (int i = 0; i < COUNT; i++)
        reals[i] = (float) rand() / (float) rand();
    // for (int i = 0; i < COUNT; i++)
    //     printf("%g\n", reals[i]);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = reals[j];
    end = clock();
    fprintf(stderr, "nop %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = reals[i] + reals[j];
    end = clock();
    fprintf(stderr, "add %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = reals[i] - reals[j];
    end = clock();
    fprintf(stderr, "sub %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = reals[i] * reals[j];
    end = clock();
    fprintf(stderr, "mul %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = reals[i] / reals[j];
    end = clock();
    fprintf(stderr, "div %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    fprintf(stderr, "add sub mul div\t%'dx%'dX%'dx%'d\n", COUNT, COUNT, COUNT, COUNT);
    start = clock();
    for (int i = 0; i < COUNT; i++)
        for (int j = 0; j < COUNT; j++)
            for (int k = 0; k < COUNT; k++)
                for (int l = 0; l < COUNT; l++)
                    result += reals[i] * reals[j] - reals[i] / reals[j];
    end = clock();
    fprintf(stderr, "asmd %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);
} /* main */
