#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

long count = 0;

int fib(int n)
{
    count++;
    if (n == 0) return 0;

    if (n == 1) return 1;

    return fib(n - 1) + fib(n - 2);
}

int main(int argc, char * argv[])
{
    int n = (argc == 1) ? 32 : atoi(argv[1]);
    int f = fib(n);

    setlocale(LC_NUMERIC, "");
    printf("%s(%'d)=%'d in %'lu", *argv, n, f, count);
}
