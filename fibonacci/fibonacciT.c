#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int count = 0;

int fib(int n, int a, int b)
{
    count++;
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    return fib(n - 1, b, a + b);
}

int main(int argc, char *argv[])
{
    int n = (argc == 1) ? 32 : atoi(argv[1]);
    int f = fib(n, 0, 1);
    printf("%s(%d)=%d in %d", *argv, n, f, count);
}
