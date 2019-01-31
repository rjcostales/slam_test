#include <stdio.h>
#include <string.h>
#include <ctype.h>

int fact(int);
int fib(int);

int fact(int f)
{
    if (f == 1)
        return 1;
    else
        return f * fact(f - 1);
}

int fib(int f)
{
    if (f == 0)
        return 1;
    if (f == 1)
        return 1;
    else
        return fib(f - 1) + fib(f - 2);
}

int main(int argc, char *argv[])
{

    int (*func) (int);
    int a;

    func = fib;
    a = func (10);

    func = fact;
    a = func (10);
}
