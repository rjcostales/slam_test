#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define LOOP 100
#define COUNT 1000

typedef double real;

int main(int argc, char *argv[])
{
    real reals[COUNT];
    real result;
    clock_t start, end;

    setlocale(LC_NUMERIC, "");

    printf("%s\t%'d - %'dx%'d\n", argv[0], LOOP, COUNT, COUNT);

    for (int i = 0; i < COUNT; i++)
        reals[i] = (float) rand() / (float) rand();
    // for (int i = 0; i < COUNT; i++)
    //     printf("%g\n", reals[i]);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = reals[j];
    end = clock();
    printf("nop\t%0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = reals[i] + reals[j];
    end = clock();
    printf("add\t%0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = reals[i] - reals[j];
    end = clock();
    printf("sub\t%0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = reals[i] * reals[j];
    end = clock();
    printf("mul\t%0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = reals[i] / reals[j];
    end = clock();
    printf("div\t%0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);

    printf("add sub mul div\t%'dx%'dX%'dx%'d\n", LOOP, LOOP, LOOP, LOOP);
    start = clock();
    for (int i = 0; i < LOOP; i++)
        for (int j = 0; j < LOOP; j++)
            for (int k = 0; k < LOOP; k++)
                for (int l = 0; l < LOOP; l++)
                    result += reals[i] * reals[j] - reals[i] / reals[j];
    end = clock();
    printf("asmd\t%0.6f\n", (float) (end - start) / (float) CLOCKS_PER_SEC);
} /* main */
