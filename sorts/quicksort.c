#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1024
#define MAXSIZE 40000

typedef char *str;

static int compare(const void *a, const void *b)
{
    /* The pointers point to offsets into "array",
       so we need to dereference them to get at the strings. */

    return strcmp(*(const char **) a, *(const char **) b);
}

int main(int argc, char *argv[])
{
    int  size;
    char line[MAXLINE];
    str  page[MAXSIZE];

    for (size = 0; fgets(line, MAXLINE, stdin); size++) {
        page[size] = calloc(strlen(line) + 1, sizeof(char));
        strcpy(page[size], line);
    }

    qsort(page, size, sizeof(const char *), compare);

    for (int i = 0; i < size; i++)
        fputs(page[i], stdout);

    return 0;
}
