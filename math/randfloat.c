#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    for (int i = 0; i < 1000; i++) {
        int a = rand();
        int b = rand();
        float c = ((a > b) ? (float) b / a : (float) a / b);
        printf("%0.23f\n", c);
    }
    return 0;
}
