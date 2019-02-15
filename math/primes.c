#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <locale.h>

#define MAX 1000000

bool isPrime(int n)
{
    if ((n % 2) == 0) {
        return false;
    } else {
        for (register int i = 3; i * i <= n; i += 2)
            if ((n % i) == 0)
                return false;
    }

    return true;
}

int main(int argc, char *argv[])
{
    int c = 0;
    clock_t start, stop;

    start = clock();
    for (register int i = 1; i < MAX; i++)
        if (isPrime(i))
            c++;
    stop = clock();

    setlocale(LC_NUMERIC, "");
    printf("execution time: %0.6f secs.\t",
      (float) (stop - start) / (float) CLOCKS_PER_SEC);
    printf("%s found %'d primes less than %'d\n", argv[0], c, MAX);
}
