#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define N 8

void zero(int board[N][N]);

void print(int mat[N][N], int q[N])
{
    int p = 0;

    for (int i = 0; i < N; i++) {
        p = q[i];
        for (int j = 0; j < N; j++) {
            if (p == j)
                mat[j][i] = 1;

            printf(" %d", mat[j][i]);
        }
        printf("\n");
    }
}

int attacked(int q[], int n)
{
    for (int i = 0; i < n; i++) {
        if (q[i] == q[n])
            return false;       // same column

        if ((q[i] - q[n]) == (n - i))
            return false;       // same major diagonal

        if ((q[n] - q[i]) == (n - i))
            return false;       // same minor diagonal
    }
    return true;
}

void solve(int q[N], int col, int board[N][N])
{
    static int count = 0;

    if (col == N) {
        printf("Sol:%d \n", ++count);
        count++;
        print(board, q);
        // reset board
        zero(board);
    } else {
        int i = 0;
        for (i = 0; i < N; i++) {
            q[col] = i;
            if (attacked(q, col)) {
                solve(q, col + 1, board);
            }
        }
    }
}

void zero(int board[N][N])
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            board[i][j] = 0;
}

/* driver code */
int main()
{
    // board board

    /*  0  means empty cells and 1 is queen
     *
     * 0 0 0 0 0 0 0 0
     * 0 0 0 0 0 0 0 0
     * 0 0 0 0 0 0 0 0
     * 0 0 0 0 0 0 0 0
     * 0 0 0 0 0 0 0 0
     * 0 0 0 0 0 0 0 0
     * 0 0 0 0 0 0 0 0
     * 0 0 0 0 0 0 0 0
     */

    int board[N][N];

    zero(board);
    // print(board,0);
    int queens[N];

    solve(queens, 0, board);
}
