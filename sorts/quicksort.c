#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1024
#define MAXSIZE 50000

typedef char *str;

int read(str strings[])
{
    int size;
    char line[MAXLINE];

    for (size = 0; fgets(line, MAXLINE, stdin); size++) {
        strings[size] = calloc(strlen(line) + 1, sizeof(char));
        strcpy(strings[size], line);
    }
    return size;
}

void print(str strings[])
{
    for (int i = 0; strings[i] != NULL; i++)
        fputs(strings[i], stdout);
}

static int compare(const void *a, const void *b)
{
    /* The pointers point to offsets into "array",
       so we need to dereference them to get at the strings. */

    return strcmp(*(const char **) a, *(const char **) b);
}

int main(int argc, char *argv[])
{
    str  page[MAXSIZE];

    int  size = read(page);

    qsort(page, size, sizeof(const char *), compare);

    print(page);

    return 0;
}
