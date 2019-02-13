#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

#include <math.h>

#define LOOP 1000
#define SIZE 1000

typedef double real;

int main(int argc, char *argv[])
{
    real reals[SIZE];
    real result;

    clock_t start, stop;

    setlocale(LC_NUMERIC, "");

    printf("%s\t%'d - %'d\n", argv[0], LOOP, SIZE);

    for (int i = 0; i < SIZE; i++)
        reals[i] = (float) rand() / (float) rand();

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < SIZE; i++)
            result = reals[i];
    stop = clock();
    printf("nop\t%0.6f\n", (float) (stop - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < SIZE; i++)
            result = sqrt(reals[i]);
    stop = clock();
    printf("sqrt\t%0.6f\n", (float) (stop - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < SIZE; i++)
            result = sin(reals[i]);
    stop = clock();
    printf("sin\t%0.6f\n", (float) (stop - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < SIZE; i++)
            result = cos(reals[i]);
    stop = clock();
    printf("cos\t%0.6f\n", (float) (stop - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < SIZE; i++)
            result = tan(reals[i]);
    stop = clock();
    printf("tan\t%0.6f\n", (float) (stop - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < SIZE; i++)
            result = atan(reals[i]);
    stop = clock();
    printf("atan\t%0.6f\n", (float) (stop - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < SIZE; i++)
            result = exp(reals[i]);
    stop = clock();
    printf("exp\t%0.6f\n", (float) (stop - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < SIZE; i++)
            result = log(reals[i]);
    stop = clock();
    printf("log\t%0.6f\n", (float) (stop - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < SIZE; i++)
            result = log10(reals[i]);
    stop = clock();
    printf("log10\t%0.6f\n", (float) (stop - start) / (float) CLOCKS_PER_SEC);
} /* main */
