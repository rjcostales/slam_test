/* C Program To Sort page in ascending order using bubble sort. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1024
#define MAXSIZE 40000

typedef char *str;

int main(int argc, char *argv[])
{
    int  size;
    char line[MAXLINE];
    str  tmp, page[MAXSIZE];

    for (size = 0; fgets(line, MAXLINE, stdin); size++) {
        page[size] = calloc(strlen(line) + 1, sizeof(char));
        strcpy(page[size], line);
    }

    for (int i = 0; i < size - 1; ++i)
        for (int j = 0; j < size - i - 1; ++j) {
            if (strcmp(page[j], page[j + 1]) > 0) {
                tmp = page[j];
                page[j] = page[j + 1];
                page[j + 1] = tmp;
            }
        }

    for (int i = 0; page[i] != NULL; i++)
        fputs(page[i], stdout);

    return 0;
}
