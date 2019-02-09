#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    double doubles[100];
    double add, sub, multiply, divide;
    clock_t start, end;

    for (int i = 0; i < 100; i++)
        doubles[i] = (float) rand() / (float) rand();
    // for (int i = 0; i < 100; i++)
    //     printf("%g\n", doubles[i]);

    start = clock();
    for (int t = 0; t < 1000000; t++)
        for (int i = 0; i < 100; i++)
            for (int j = 0; j < 100; j++)
                add = doubles[i] + doubles[j];
    end = clock();
    printf("add %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < 1000000; t++)
        for (int i = 0; i < 100; i++)
            for (int j = 0; j < 100; j++)
                sub = doubles[i] - doubles[j];
    end = clock();
    printf("sub %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < 1000000; t++)
        for (int i = 0; i < 100; i++)
            for (int j = 0; j < 100; j++)
                multiply = doubles[i] * doubles[j];
    end = clock();
    printf("multiply %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < 1000000; t++)
        for (int i = 0; i < 100; i++)
            for (int j = 0; j < 100; j++)
                divide = doubles[i] / doubles[j];
    end = clock();
    printf("divide %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

} /* main */
