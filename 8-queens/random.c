#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

#define N 8

int queen[8];

void swap(int *a, int *b)
{
    char t = *a;

    *a = *b;
    *b = t;
}

void print(int board[N][N])
{
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            printf(" %d", board[row][col]);
        }
        printf("\n");
    }
}

void zero(int board[N][N])
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            board[i][j] = 0;
}

void generate()
{
    for (int i = 0; i < 8; i++)
        queen[i] = i;
    for (int i = 7; i > 0; i--) {
        int r = rand() % (i + 1);
        // printf("%d %d\n", i, r);

        swap(&queen[i], &queen[r]);
    }
}

bool check(int board[N][N])
{
    int queens[8] = { 8 };

    // for (int row = 0; row < N; row++) {
    //     int count = 0;
    //     for (int col = 0; col < N; col++) {
    //         if (board[row][col] == 1) {
    //             count++;
    //             if (count > 1) return false;
    //         }
    //     }
    // }

    for (int col = 0; col < N; col++) {
        int count = 0;
        for (int row = 0; row < N; row++) {
            if (board[row][col] == 1) {
                count++;
                if (count > 1)
                    return false;

                queens[col] = row;
            }
        }
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (abs(i - j) == abs(queens[i] - queens[j]))
                return false;
        }
    }
    return true;
}                               /* check */

int main()
{
    srand(time(NULL));
    int count = 100;
    while (count-- > 0) {
        generate();

        for (int i = 0; i < 8; i++)
            printf("%d", queen[i]);
        printf("\n ");
    }
}
