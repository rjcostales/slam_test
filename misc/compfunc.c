#include <stdio.h>

typedef double(*ptr2func) (double);

double pwr2(double), pwr3 (double);

double compnest (double);
ptr2func compfunc (ptr2func, ptr2func);

int main(int argc, char *argv[])
{
    ptr2func pwr4;
    ptr2func pwr9;

    pwr4 = compfunc (&pwr2, &pwr2);
    printf("%8.1f\n", pwr4 (2.0));
    printf("%8.1f\n", pwr4 (3.0));

    pwr4 = compfunc(&pwr2, &pwr2);

    pwr9 = compfunc (&pwr3, &pwr3);
    printf("%8.1f\n", pwr9 (2.0));
    printf("%8.1f\n", pwr9 (3.0));
}

double pwr2(double n)
{
    return n * n;
}

double pwr3(double n)
{
    return n * n * n;
}

static ptr2func func1, func2;

ptr2func compfunc(double (*f1)(double), double (*f2)(double))
{
    func1 = f1;
    func2 = f2;
    return &compnest;
}

double compnest(double n)
{
    return func2 (func1 (n));
}
