#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define LOOPS 100
#define COUNT 1000

int main(int argc, char *argv[])
{
    int integers[COUNT];
    int result;
    clock_t start, end;

    setlocale(LC_NUMERIC, "");

    fprintf(stderr, "%s\t%'d - %'dx%'d\n", argv[0], LOOPS, COUNT, COUNT);

    for (int i = 0; i < COUNT; i++)
        integers[i] = rand();
    // for (int i = 0; i < COUNT; i++)
    //     printf("%g\n", integers[i]);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = integers[j];
    end = clock();
    fprintf(stderr, "nop %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = integers[i] + integers[j];
    end = clock();
    fprintf(stderr, "add %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = integers[i] - integers[j];
    end = clock();
    fprintf(stderr, "sub %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = integers[i] * integers[j];
    end = clock();
    fprintf(stderr, "mul %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = integers[i] / integers[j];
    end = clock();
    fprintf(stderr, "div %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = integers[i] % integers[j];
    end = clock();
    fprintf(stderr, "mod %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = integers[i] & integers[j];
    end = clock();
    fprintf(stderr, "and %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = integers[i] | integers[j];
    end = clock();
    fprintf(stderr, "or  %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOPS; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = integers[i] ^ integers[j];
    end = clock();
    fprintf(stderr, "xor %0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);
} /* main */
