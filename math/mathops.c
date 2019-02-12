#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

#include <math.h>

#define LOOP 10000
#define SIZE 10000

typedef double real;

int main(int argc, char *argv[])
{
    real reals[SIZE];
    real result;

    clock_t start, end;
    setlocale(LC_NUMERIC, "");

    printf("%s\t%'d - %'d\n", argv[0], LOOP, SIZE);

    for (int i = 0; i < SIZE; i++)
        reals[i] = (float) rand() / (float) rand();

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < SIZE; i++)
            result = reals[i];
    end = clock();
    printf("nop\t%0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < SIZE; i++)
            result = sqrt(reals[i]);
    end = clock();
    printf("sqrt\t%0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < SIZE; i++)
            result = sin(reals[i]);
    end = clock();
    printf("sin\t%0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < SIZE; i++)
            result = cos(reals[i]);
    end = clock();
    printf("cos\t%0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < SIZE; i++)
            result = tan(reals[i]);
    end = clock();
    printf("tan\t%0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < SIZE; i++)
            result = atan(reals[i]);
    end = clock();
    printf("atan\t%0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < SIZE; i++)
            result = exp(reals[i]);
    end = clock();
    printf("exp\t%0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < SIZE; i++)
            result = log(reals[i]);
    end = clock();
    printf("log\t%0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < SIZE; i++)
            result = log10(reals[i]);
    end = clock();
    printf("log10\t%0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);
} /* main */
