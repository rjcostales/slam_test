/* mergesort example */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAXLINE 1024
#define MAXSIZE 1024

#define KEYSIZE 15

void merge(int a[], int b[], int c[], int m, int n)
{
    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    while (i < m)
        c[k++] = a[i++];
    while (j < n)
        c[k++] = b[j++];
}

void mergesort(int key[], int n)
{
    int i, j, k, *w;

    if (n > 1) {
        j = n / 2;
        k = n - j;

        mergesort(key, j);
        mergesort(key + j, k);

        w = calloc(n, sizeof(int));

        merge(key, key + j, w, j, k);

        for (i = 0; i < n; i++)
            key[i] = w[i];

        free(w);
    }
}

int randint(int bound)
{
    return rand() % bound;
}

int main(int argc, char *argv[])
{
    int i, key[KEYSIZE];

    srand(time(NULL));
    for (i = 0; i < KEYSIZE; i++)
        key[i] = randint(100) - 50;

    printf("Before mergesort:\n");
    for (i = 0; i < KEYSIZE; i++)
        printf("%4d", key[i]);
    putchar('\n');

    mergesort(key, KEYSIZE);

    printf("After mergesort:\n");
    for (i = 0; i < KEYSIZE; i++)
        printf("%4d", key[i]);
    putchar('\n');
}
