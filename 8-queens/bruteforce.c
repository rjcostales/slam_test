/* C/C++ program to solve N Queen Problem using backtracking */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 8

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
    int count = 0;
    int board[N][N];

    for (int a = 0; a < N; a++)
        for (int b = 0; b < N; b++)
            for (int c = 0; c < N; c++)
                for (int d = 0; d < N; d++)
                    for (int e = 0; e < N; e++)
                        for (int f = 0; f < N; f++)
                            for (int g = 0; g < N; g++)
                                for (int h = 0; h < N; h++) {
                                    zero(board);
                                    board[0][a] = 1;
                                    board[1][b] = 1;
                                    board[2][c] = 1;
                                    board[3][d] = 1;
                                    board[4][e] = 1;
                                    board[5][f] = 1;
                                    board[6][g] = 1;
                                    board[7][h] = 1;
                                    if (check(board)) {
                                        printf("solution: %d\n", ++count);
                                        print(board);
                                    }
                                }
    return 0;
}                               /* main */
