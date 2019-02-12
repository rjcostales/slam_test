#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define LOOP 10000
#define SIZE 100

typedef double real;

int main(int argc, char *argv[])
{
    real reals[SIZE];
    real result;
    clock_t start, stop;

    setlocale(LC_NUMERIC, "");

    printf("%s\t%'d - %'dx%'d\n", argv[0], LOOP, SIZE, SIZE);

    for (int i = 0; i < SIZE; i++)
        reals[i] = (float) rand() / (float) rand();
    // for (int i = 0; i < SIZE; i++)
    //     printf("%g\n", reals[i]);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                result = reals[j];
    stop = clock();
    printf("nop\t%0.6f\n", (float) (stop - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                result = reals[i] + reals[j];
    stop = clock();
    printf("add\t%0.6f\n", (float) (stop - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                result = reals[i] - reals[j];
    stop = clock();
    printf("sub\t%0.6f\n", (float) (stop - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                result = reals[i] * reals[j];
    stop = clock();
    printf("mul\t%0.6f\n", (float) (stop - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < SIZE; i++)
            for (int j = 0; j < SIZE; j++)
                result = reals[i] / reals[j];
    stop = clock();
    printf("div\t%0.6f\n", (float) (stop - start) / (float) CLOCKS_PER_SEC);

    printf("add sub mul div\t%'dx%'dX%'dx%'d\n", SIZE, SIZE, SIZE, SIZE);
    start = clock();
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            for (int k = 0; k < SIZE; k++)
                for (int l = 0; l < SIZE; l++)
                    result += reals[i] * reals[j] - reals[i] / reals[j];
    stop = clock();
    printf("all\t%0.6f\n", (float) (stop - start) / (float) CLOCKS_PER_SEC);
} /* main */
