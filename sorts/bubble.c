/* C Program To Sort page in ascending order using bubble sort. */
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

    for (i = 0; i < size - 1; ++i)
        for (j = 0; j < size - i - 1; ++j) {
            if (strcmp(page[j], page[j + 1]) > 0) {
                tmp = page[j];
                page[j] = page[j + 1];
                page[j + 1] = tmp;
            }
        }

    for (i = 0; page[i] != NULL; i++)
        fputs(page[i], stdout);

    return 0;
}
