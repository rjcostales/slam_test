/* mergesort example */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1024
#define MAXSIZE 40000

typedef char *str;

void merge(str array[], str left[], str right[], int size_l, int size_r)
{
    int i = 0, j = 0, k = 0;

    while (i < size_l && j < size_r) {
        if (strcmp(left[i], right[j]) < 0)
            array[k++] = left[i++];
        else
            array[k++] = right[j++];
    }

    while (i < size_l)
        array[k++] = left[i++];

    while (j < size_r)
        array[k++] = right[j++];
}

void mergesort(str array[], int size)
{
    int i, j;
    i = j = 0;

    if (size > 1) {
        i = size / 2;
        j = size - i;

        str left[i];
        str right[j];

        for (int n = 0; n < i; n++)
            left[n] = array[n];
        mergesort(left, i);

        for (int n = 0; n < j; n++)
            right[n] = array[n + i];
        mergesort(right, j);

        merge(array, left, right, i, j);
    }
}

void print(str a[], int n)
{
    for (int i = 0; i < n; i++)
        fputs(a[i], stdout);

}

int main(int argc, char *argv[])
{
    int size;
    char line[MAXLINE];
    str page[MAXSIZE];

    for (size = 0; fgets(line, MAXLINE, stdin); size++) {
        page[size] = calloc(strlen(line) + 1, sizeof(char));
        strcpy(page[size], line);
    }

    mergesort(page, size);
    print(page, size);

    // for (size = 0; page[size] != NULL; size++)
    //     fputs(page[size], stdout);

    return 0;
}
