#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define LOOP 100
#define COUNT 1000

int main(int argc, char *argv[])
{
    int integers[COUNT];
    int result;
    clock_t start, end;

    setlocale(LC_NUMERIC, "");

    printf("%s\t%'d - %'dx%'d\n", argv[0], LOOP, COUNT, COUNT);

    for (int i = 0; i < COUNT; i++)
        integers[i] = rand();
    // for (int i = 0; i < COUNT; i++)
    //     printf("%g\n", integers[i]);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = integers[j];
    end = clock();
    printf("nop\t%0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = integers[i] + integers[j];
    end = clock();
    printf("add\t%0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = integers[i] - integers[j];
    end = clock();
    printf("sub\t%0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = integers[i] * integers[j];
    end = clock();
    printf("mul\t%0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = integers[i] / integers[j];
    end = clock();
    printf("div\t%0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = integers[i] % integers[j];
    end = clock();
    printf("mod\t%0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = integers[i] & integers[j];
    end = clock();
    printf("and\t%0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = integers[i] | integers[j];
    end = clock();
    printf("or\t%0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);

    start = clock();
    for (int t = 0; t < LOOP; t++)
        for (int i = 0; i < COUNT; i++)
            for (int j = 0; j < COUNT; j++)
                result = integers[i] ^ integers[j];
    end = clock();
    printf("xor\t%0.6f\n",
      (float) (end - start) / (float) CLOCKS_PER_SEC);
} /* main */
