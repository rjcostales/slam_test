#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1024
#define MAXSIZE 40000

typedef char *str;

int main(int argc, char *argv[])
{
    int  i, j, size;
    char line[MAXLINE];
    str  tmp, page[MAXSIZE];

    for (i = 0; fgets(line, MAXLINE, stdin); i++) {
        page[i] = calloc(strlen(line) + 1, sizeof(char));
        strcpy(page[i], line);
    }

    size = i;

    // insertion sort
    for (i = 1; i < size; i++) {
        tmp = (str) page[i];
        j = i;

        while (j && (strcmp(page[j - 1], tmp) > 0)) {
            page[j] = page[j - 1];
            j--;
        }

        page[j] = tmp;
    }

    for (i = 0; i < size; i++)
        fputs(page[i], stdout);
}
