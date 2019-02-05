#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1024
#define MAXSIZE 40000

typedef char * str;

int main(int argc, char *argv[])
{
    int  i, j, min, count;
    char line[MAXLINE];
    str  temp, page[MAXSIZE];

    for (i = 0; fgets(line, MAXLINE, stdin); i++) {
        page[i] = calloc(strlen(line) + 1, sizeof(char));
        strcpy(page[i], line);
    }

    count = i;

    // selection sort
    for (i = 0; i < count; i++) {
        min = i;

        for (j = i; j < count; j++) {
            if (strcmp(page[min], page[j]) > 0)
                min = j;
        }

        temp = page[i];
        page[i] = page[min];
        page[min] = temp;
    }

    for (int i = 0; page[i] != NULL; i++)
        fputs(page[i], stdout);

    return 0;
}
