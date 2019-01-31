#include <stdio.h>

int main (int argc, char *argv[])
{

    char *cp, c;
    short *sp, s;
    int *ip, i;

    typedef struct {
        char c0;
        short s0;

        char c1;
        int i0;

        char c2;
        short s1;
        char c3;
    } t_struct;

    t_struct t1;

    struct {
        int b0 : 1;
        int b1 : 1;
        int b2 : 1;
        int b3 : 5;
        int b4 : 8;
        int b5 : 16;
    } bit;

    typedef union {
        char ca[4];
        int i;
    } t_union;

    t_union u1;

    printf ("-------------------------\n");

    bit.b0 = 1;
    bit.b1 = 1;
    bit.b2 = 1;
    bit.b3 = 1;
    bit.b4 = 1;
    bit.b5 = 1;

    printf ("bit\t%i\n", sizeof (bit));
    printf ("bit\t%i\n", bit);

    printf ("-------------------------\n");

    printf ("struct\t%i\n", sizeof (t1));
    printf ("t1\t%p\n", &t1);

    printf ("-------------------------\n");

    printf ("c0\t%p\n", &t1.c0);
    printf ("s0\t%p\n", &t1.s0);

    printf ("c1\t%p\n", &t1.c1);
    printf ("i0\t%p\n", &t1.i0);

    printf ("c2\t%p\n", &t1.c2);
    printf ("s1\t%p\n", &t1.s1);
    printf ("c3\t%p\n", &t1.c3);

    printf ("-------------------------\n");

    u1.ca[0] = 0;
    u1.ca[1] = 1;
    u1.ca[2] = 0;
    u1.ca[3] = 0;

    printf ("union\t\%i\n", sizeof (u1));
    printf ("u1.i\t\%i\n", u1.i);

    printf ("-------------------------\n");

    c = 'a';
    s = 97;
    i = 97;

    printf ("char\t%i\n", sizeof (c));
    printf ("short\t%i\n", sizeof (s));
    printf ("int\t%i\n", sizeof (i));

    printf ("-------------------------\n");

    cp = &c;
    printf ("cp -> c %u\n", 0xff & *cp);

    printf ("-------------------------\n");

    cp = (char *) &s;
    printf ("cp -> s %u\n", 0xff & *cp++);
    printf ("cp -> s %u\n", 0xff & *cp);

    printf ("-------------------------\n");

    cp = (char *) &i;
    printf ("cp -> i %u\n", 0xff & *cp++);
    printf ("cp -> i %u\n", 0xff & *cp++);
    printf ("cp -> i %u\n", 0xff & *cp++);
    printf ("cp -> i %u\n", 0xff & *cp);
}
