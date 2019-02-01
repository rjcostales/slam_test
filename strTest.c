#include <stdio.h>
#include "strfunc.h"

int main(int argc, char * argv[])
{
    char r[12] = "  right  ";

    printf("%s<\n", r);
    printf("%s<\n", rtrim(r));

    char s[12] = "  left  ";
    printf("%s<\n", s);
    printf("%s<\n", ltrim(s));

    char t[12] = "  middle  ";
    printf("%s<\n", t);
    printf("%s<\n", trim(t));

    printf("f %d\n", '\f');
    printf("n %d\n", '\n');
    printf("r %d\n", '\r');
    printf("t %d\n", '\t');
    printf("v %d\n", '\v');

    return 0;
}
