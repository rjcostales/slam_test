#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    double doubles[100];
    double sine, cosine, tangent, logrithm, squareroot;
    clock_t start, end;

    for (int i = 0; i < 100; i++)
        doubles[i] = (float) rand() / (float) rand();
    // for (int i = 0; i < 100; i++)
    //     printf("%g\n", doubles[i]);

    start = clock();
    for (int t = 0; t < 1000000; t++)
        for (int i = 0; i < 100; i++)
            squareroot = sqrt(doubles[i]);
    end = clock();
    printf("sqrt %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < 1000000; t++)
        for (int i = 0; i < 100; i++)
            sine = sin(doubles[i]);
    end = clock();
    printf("sin %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < 1000000; t++)
        for (int i = 0; i < 100; i++)
            cosine = cos(doubles[i]);
    end = clock();
    printf("cos %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < 1000000; t++)
        for (int i = 0; i < 100; i++)
            tangent = tan(doubles[i]);
    end = clock();
    printf("tan %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < 1000000; t++)
        for (int i = 0; i < 100; i++)
            logrithm = log(doubles[i]);
    end = clock();
    printf("log %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < 1000000; t++)
        for (int i = 0; i < 100; i++)
            logrithm = log10(doubles[i]);
    end = clock();
    printf("log10 %0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);
} /* main */
