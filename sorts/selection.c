#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1024
#define MAXSIZE 40000

typedef char *str;

void print(str strings[])
{
    for (int i = 0; strings[i] != NULL; i++)
        fputs(strings[i], stdout);
}

int main(int argc, char *argv[])
{
    int  min, size;
    char line[MAXLINE];
    str  tmp, page[MAXSIZE];

    for (size = 0; fgets(line, MAXLINE, stdin); size++) {
        page[size] = calloc(strlen(line) + 1, sizeof(char));
        strcpy(page[size], line);
    }

    // selection sort
    for (int i = 0; i < size; i++) {

        min = i;
        for (int j = i; j < size; j++) {
            if (strcmp(page[min], page[j]) > 0)
                min = j;
        }

        tmp = page[i];
        page[i] = page[min];
        page[min] = tmp;
    }

    print(page);

    return 0;
}
