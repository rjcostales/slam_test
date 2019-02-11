#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

long count = 0;

int fib(int n, int a, int b)
{
    count++;
    if (n == 0) return a;
    if (n == 1) return b;
    return fib(n - 1, b, a + b);
}

int main(int argc, char *argv[])
{
    int n = (argc == 1) ? 32 : atoi(argv[1]);
    clock_t start, end;

    start = clock();
    int f = fib(n, 0, 1);
    end = clock();

    setlocale(LC_NUMERIC, "");
    printf("%s(%'d)=%'d in %'lu\n", *argv, n, f, count);
    printf("execution time: %0.6f secs.\n",
            (float) (end - start) / (float) CLOCKS_PER_SEC);
}
