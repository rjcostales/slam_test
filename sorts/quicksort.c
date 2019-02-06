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
    int i;
    char line[MAXLINE];
    str page[MAXSIZE];

    for (i = 0; fgets(line, MAXLINE, stdin); i++) {
        page[i] = calloc(strlen(line) + 1, sizeof(char));
        strcpy(page[i], line);
    }

    qsort(page, i, sizeof(const char *), compare);

    for (i = 0; page[i] != NULL; i++)
        fputs(page[i], stdout);

    return 0;
}
