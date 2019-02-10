#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

long count = 0;

int fib(int n)
{
    count++;
    switch (n) {
    case 0:
        return 0;
    case 1:
    case 2:
        return 1;
    case 3:
        return 2;
    default:
        return fib(n - 3) * 3 + fib(n - 4) * 2;
    }
}

int main(int argc, char *argv[])
{
    int n = (argc == 1) ? 32 : atoi(argv[1]);
    clock_t start, end;

    start = clock();
    int f = fib(n);
    end = clock();

    setlocale(LC_NUMERIC, "");
    fprintf(stderr, "%s(%'d)=%'d in %'lu\n", *argv, n, f, count);
    fprintf(stderr, "execution time: %0.6f secs.\n",
            (float) (end - start) / (float) CLOCKS_PER_SEC);
}
