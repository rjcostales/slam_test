#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

#define N 8


void print(int *array)
{
    for (int i = 0; i < 8; i++)
        printf("%d", array[i]);
    printf("\n");
}

void swap(int *a, int *b)
{
    int t = *a;

    *a = *b;
    *b = t;
}

void generate(int array[])
{
    for (int i = 0; i < 8; i++)
        array[i] = i;

    for (int i = 2; i < 8; i++) {
        int r = rand() % i;
        // printf("%d %d\n", i, r);
        swap(&array[i], &array[r]);
    }
}

int main()
{
    int queen[8];

    srand(time(NULL));
    int count = 40;
    while (count-- > 0) {
        generate(queen);
        print(queen);
    }

    return 0;
}
