/* C Program To Sort page in ascending order using bubble sort. */
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
    int  size = read(page);

    clock_t start, end;
    start = clock();
    for (int i = 0; i < size - 1; ++i)
        for (int j = 0; j < size - i - 1; ++j) {
            if (strcmp(page[j], page[j + 1]) > 0) {
                tmp = page[j];
                page[j] = page[j + 1];
                page[j + 1] = tmp;
            }
        }
    end = clock();
    setlocale(LC_NUMERIC, "");
    printf("execution time: %0.6f secs.\t",
           (float) (end - start) / (float) CLOCKS_PER_SEC);
    printf("%s %d records\n", argv[0], size);

    print(page);

    return 0;
}
