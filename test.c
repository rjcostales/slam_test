/* C Program To Sort page in ascending order using bubble sort. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1024
#define MAXSIZE 1024

typedef char* str;

typedef struct sum {
    float x;
    float x2;
    float xy ;
    float y;
    float y2;
} sums;

void foo(sums* s) {

    s->x2 = 3;
    s->y2 = 4;
}

sums* bar(sums* s) {

    s->xy = 5;
    return s;
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

    sums s;
    sums* t;

    s.x = 1;
    s.y = 2;

    printf("x %g\n", s.x);
    printf("y %g\n", s.y);

    foo(&s);

    printf("x2 %g\n", s.x2);
    printf("y2 %g\n", s.y2);

    t = bar(&s);

    printf("x2 %g\n", (*t).x2);
    printf("y2 %g\n", (*t).y2);
    printf("xy %g\n", (*t).xy);

    return 0;
}
