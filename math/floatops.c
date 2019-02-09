#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

#define LOOPS 1000000
#define COUNT 100

int main(void)
{
    double doubles[COUNT];
    double add, sub, multiply, divide;
    clock_t start, end;

    for (int i = 0; i < COUNT; i++)
        doubles[i] = (float) rand() / (float) rand();
    // for (int i = 0; i < COUNT; i++)
    //     printf("%g\n", doubles[i]);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                add = doubles[i] + doubles[j];
    end = clock();
    printf("add %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                sub = doubles[i] - doubles[j];
    end = clock();
    printf("sub %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                multiply = doubles[i] * doubles[j];
    end = clock();
    printf("multiply %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                divide = doubles[i] / doubles[j];
    end = clock();
    printf("divide %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

} /* main */
