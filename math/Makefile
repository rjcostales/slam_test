CC     = clang
CFLAGS = -Ofast -Wall -std=c99
LFLAGS = -lm

TARGETS = fpops intops mathops \
sine_area pi_archemides semi_cir_arc primes \
randfloat randgen dhrystone whetstone \
math.o math_test factorize a.out
SOURCES = *.c
HEADERS = *.h

all: intops fpops mathops \
pi_archemides semi_cir_arc primes sine_area \
dhrystone whetstone \
math.o math_test randgen randfloat factorize

fpops: fpops.c
	$(CC) fpops.c -o fpops

intops: intops.c
	$(CC) intops.c -o intops

mathops: mathops.c
	$(CC) mathops.c -o mathops $(LFLAGS)

math: math.c
	$(CC) $(CFLAGS) -c math.c -o math.o

math_test: math_test.c
	$(CC) $(CFLAGS) math_test.c math.o -o math_test

factorize: factorize.c
	$(CC) $(CFLAGS) factorize.c -o factorize $(LFLAGS)

sine_area: sine_area.c
	$(CC) $(CFLAGS) sine_area.c -o sine_area $(LFLAGS)

pi_archemides: pi_archemides.c
	$(CC) $(CFLAGS) pi_archemides.c -o pi_archemides $(LFLAGS)

semi_cir_arc: semi_cir_arc.c
	$(CC) $(CFLAGS) semi_cir_arc.c -o semi_cir_arc $(LFLAGS)

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
