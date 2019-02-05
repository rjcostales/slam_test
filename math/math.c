#include "math.h"

int factorial(int f)
{
    if (f == 1)
        return 1;
    else
        return f * factorial(f - 1);
}

int fibonacci(int f)
{
    if (f == 0)
        return 1;

    if (f == 1)
        return 1;
    else
        return fibonacci(f - 1) + fibonacci(f - 2);
}

/*****
*  int gcd(int a, int b)
*  {
*      if (a == 0)
*      return b;
*      else if (b >= a)
*      return gcd(a, b - a);
*      else
*      return gcd(b, a);
*  }
*****/

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int gcd(int a, int b)
{
    if (a % b)
        return gcd(b, a % b);
    else
        return b;
}

int mod(int a, int b)
{
    if (a < b)
        return a;
    else
        return mod(a - b, b);
}

int power(int a, int b)
{
    if (b == 0)
        return 1;

    if (b == 1)
        return a;
    else
        return power(a, b % 2) * power(a * a, b / 2);
}
