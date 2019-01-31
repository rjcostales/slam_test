#include <stdio.h>
#include <stdlib.h>

#define BYTE1(X) (0xff000000&(X))
#define BYTE2(X) (0x00ff0000&(X))
#define BYTE3(X) (0x0000ff00&(X))
#define BYTE4(X) (0x000000ff&(X))

unsigned long swap(unsigned long in)
{
    return BYTE1 (in) >> 24 | BYTE2 (in) >> 8 | BYTE3 (in) << 8 | BYTE4 (in) << 24;
}

int main(int argc, char *argv[])
{
    long buf;
    FILE *in, *out;

    printf ("%d, %s, %s\n", argc, argv[1], argv[2]);

    in = fopen(argv[1], "rb");
    out = fopen(argv[2], "wb");

    while (fread(&buf, 1, 4, in)) {
        buf = swap(buf);
        fwrite(&buf, 4, 1, out);
    }

    fclose(in);
    fclose(out);

    return 0;
}
