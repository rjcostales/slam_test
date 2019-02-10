/* C Program To Sort page in ascending order using bubble sort. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1024
#define MAXSIZE 1024

typedef char* str;

typedef struct sum {
    int   n;
    float x;
    float x2;
    float xy ;
    float y;
    float y2;
} sum;

typedef struct coeff {
    float slope;
    float intercept;
    float coefficient;
} coeff;

void foo(sum* s)
{
    s->x2 = 4;
    s->y2 = 5;
}

sum* bar(sum* s)
{
    s->xy =6;
    return s;
}

coeff* newcoeff()
{
    coeff* c;
    c = malloc(sizeof(c));
    c->slope = 0;
    c->intercept = 0;
    c->coefficient = 0;

    return c;
}

int main(int argc, char *argv[])
{
    // str temp, string;

    // printf("%p\n", string);
    // string = malloc(16);
    // strcpy(string, "this is a test\n");
    // fputs(string, stdout);

    // printf("%p\n", string);
    // printf("n %d\n", '\n');
    // printf("r %d\n", '\r');
    // printf("t %d\n", '\t');
    // printf("v %d\n", '\v');

    sum s;
    sum* t;

    memset(&s, 0, sizeof(s));
    s.n = 1;
    s.x = 2;
    s.y = 3;

    printf("%ld\n", sizeof(s));
    printf("%ld\n", sizeof(*t));

    printf("n  %d\n", s.n);
    printf("x  %g\n", s.x);
    printf("y  %g\n", s.y);
    printf("x2 %g\n", s.x2);
    printf("y2 %g\n", s.y2);
    printf("xy %g\n", s.xy);
    printf("\n");

    foo(&s);

    printf("x2 %g\n", s.x2);
    printf("y2 %g\n", s.y2);
    printf("\n");

    t = bar(&s);

    printf("x2 %g\n", t->x2);
    printf("y2 %g\n", t->y2);
    printf("xy %g\n", t->xy);
    printf("\n");

    coeff *c = newcoeff();

    printf("slope       %g\n", c->slope);
    printf("intercept   %g\n", c->intercept);
    printf("coefficient %g\n", c->coefficient);
    printf("\n");

    return 0;
}
