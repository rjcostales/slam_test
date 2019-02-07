#include <stdio.h>
#include "math.h"

int main(int argc, char *argv[])
{
    printf("factorial %d\n", factorial(10));
    printf("fibonacci %d\n", fibonacci(10));

    printf("lcm %d\n", lcm(1958, 1024));
    printf("gcd %d\n", gcd(1958, 1024));
    printf("power %d\n", power(2, 16));
}
