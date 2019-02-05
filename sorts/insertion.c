#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1024
#define MAXSIZE 40000

typedef char * str;

int main(int argc, char *argv[])
{
    int  i, r, size;
    char line[MAXLINE];
    str  page[MAXSIZE], temp;

    for (size = 0; fgets(line, MAXLINE, stdin); size++) {
        page[size] = (char *) malloc(strlen(line));
        strcpy(page[size], line);
    }

    // insertion sort
    for (r = 1; r < size; r++) {
        temp = (str) page[r];
        i = r;

        while (i && (strcmp(page[i - 1], temp) > 0)) {
            page[i] = page[i - 1];
            i--;
        }

        page[i] = temp;
    }

    for (i = 0; i < size; i++)
        fputs(page[i], stdout);
}
