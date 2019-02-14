#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

#undef  PRINT
#define MAXLINE 1024
#define MAXSIZE 65536

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
#ifdef PRINT
    for (int i = 0; strings[i] != NULL; i++)
        fputs(strings[i], stdout);
#endif
}

int main(int argc, char *argv[])
{
    str  tmp, page[MAXSIZE];
    int  i, j, size = read(page);

    // insertion sort
    clock_t start, end;
    start = clock();
    for (i = 1; i < size; i++) {
        tmp = (str) page[i];
        j = i;

        while (j && (strcmp(page[j - 1], tmp) > 0)) {
            page[j] = page[j - 1];
            j--;
        }

        page[j] = tmp;
    }
    end = clock();
    setlocale(LC_NUMERIC, "");
    printf("execution time: %0.6f secs.\t",
           (float) (end - start) / (float) CLOCKS_PER_SEC);
    printf("%s %d records\n", argv[0], size);

    print(page);

    return 0;
}
