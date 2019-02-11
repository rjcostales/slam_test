#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int seed = 1234567890;
    float c = 1.0;
    int n = 1000;

    switch (argc) {
    case 4: c = atof(argv[3]);
    case 3: seed = atoi(argv[2]);
    case 2: n = atoi(argv[1]);
    }

    srand(seed);

    for (int i = 0; i < n; i++) {
        int r1 = rand();
        int r2 = rand();
        float rd = ((r1 > r2) ? (float) r2 / r1 : (float) r1 / r2);
        printf("%0.23f\n", rd * c);
    }
    return 0;
}
