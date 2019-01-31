#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool isPrime(int n)
{
    if ((n % 2) == 0)
        return false;
    else
        for (int i = 3; i * i <= n; i += 2)
            if ((n % i) == 0)
                return false;

    return true;
}

int main(int argc, char *argv[])
{
    int c = 0;

    for (int i = 1; i < 0xFFFFFFFF; i++)
        if (isPrime(i))
            c++;

    printf("%u\n", c);
}
