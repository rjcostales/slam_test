#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define N   8
#define LEN 80

int main(int argc, char *argv[])
{
    char string[10] = { 0 };
    int  counts[8][8] = { 0 };

    // memset(string, 0, sizeof(string));
    // memset(counts, 0, sizeof(counts));

    while (fgets(string, sizeof(string), stdin) != NULL) {
        printf("%s", string);
        for (int i = 0; i < N; i++)
            counts[string[i] - '0'][i]++;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%2d ", counts[i][j]);
        printf("\n");
    }

    return 0;
}
