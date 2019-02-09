#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

#define LOOPS 10000
#define COUNT 100

typedef double real;

int main(int argc, char *argv[])
{
    real reals[COUNT];
    real add, sub, mul, div;
    clock_t start, end;

    setlocale(LC_NUMERIC, "");
    printf("%s\t%'d\t%'dx%'d\n", argv[0], LOOPS, COUNT, COUNT);

    for (int i = 0; i < COUNT; i++)
        reals[i] = (float) rand() / (float) rand();
    // for (int i = 0; i < COUNT; i++)
    //     printf("%g\n", reals[i]);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                add = reals[i] + reals[j];
    end = clock();
    printf("add %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                sub = reals[i] - reals[j];
    end = clock();
    printf("sub %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                mul = reals[i] * reals[j];
    end = clock();
    printf("mul %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                div = reals[i] / reals[j];
    end = clock();
    printf("div %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

} /* main */
