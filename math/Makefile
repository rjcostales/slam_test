CC     = clang
CFLAGS = -Ofast -Wall -std=c99
LFLAGS = -lm

TARGETS = floatops intops mathops \
sine_area pi_archemides semi_cir_length primes \
randfloat randgen dhrystone whetstone \
math.o mathTest factorize a.out
SOURCES = *.c
HEADERS = *.h

all: floatops intops mathops \
sine_area pi_archemides semi_cir_length primes \
randfloat randgen dhrystone whetstone \
math.o mathTest factorize

floatops: floatops.c
	$(CC) floatops.c -o floatops

intops: intops.c
	$(CC) intops.c -o intops

mathops: mathops.c
	$(CC) mathops.c -o mathops $(LFLAGS)

math: math.c
	$(CC) $(CFLAGS) -c math.c -o math.o

mathTest: mathTest.c
	$(CC) $(CFLAGS) mathTest.c math.o -o mathTest

factorize: factorize.c
	$(CC) $(CFLAGS) factorize.c -o factorize $(LFLAGS)

sine_area: sine_area.c
	$(CC) $(CFLAGS) sine_area.c -o sine_area $(LFLAGS)

pi_archemides: pi_archemides.c
	$(CC) $(CFLAGS) pi_archemides.c -o pi_archemides $(LFLAGS)

semi_cir_length: semi_cir_length.c
	$(CC) $(CFLAGS) semi_cir_length.c -o semi_cir_length $(LFLAGS)

primes: primes.c
	$(CC) $(CFLAGS) primes.c -o primes

randgen: randgen.c
	$(CC) $(CFLAGS) randgen.c -o randgen

dhrystone: dhrystone.c
	$(CC) dhrystone.c -o dhrystone

whetstone: whetstone.c
	$(CC) whetstone.c -o whetstone $(LFLAGS)

clean:
	rm -f $(TARGETS)
