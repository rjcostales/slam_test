CC     = clang
CFLAGS = -Ofast -Wall -std=c99
LFLAGS = -lm

TARGETS = fpops intops mathops \
pi_archemides semi_cir_arc primes sine_area \
factorize linear_regression randfloat randgen \
dhrystone whetstone math.o math_test
SOURCES = *.c
HEADERS = *.h

all: $(TARGETS)

fpops: fpops.c
	$(CC) fpops.c -o fpops

intops: intops.c
	$(CC) intops.c -o intops

mathops: mathops.c
	$(CC) mathops.c $(LFLAGS) -o mathops

pi_archemides: pi_archemides.c
	$(CC) $(CFLAGS) $(LFLAGS) pi_archemides.c -o pi_archemides

semi_cir_arc: semi_cir_arc.c
	$(CC) $(CFLAGS) $(LFLAGS) semi_cir_arc.c -o semi_cir_arc

sine_area: sine_area.c
	$(CC) $(CFLAGS) $(LFLAGS) sine_area.c -o sine_area

dhrystone: dhrystone.c
	$(CC) dhrystone.c -o dhrystone

whetstone: whetstone.c
	$(CC) $(LFLAGS) whetstone.c -o whetstone

math.o: math.c
	$(CC) $(CFLAGS) -c math.c -o math.o

math_test: math_test.c
	$(CC) $(CFLAGS) math_test.c math.o -o math_test

factorize: factorize.c
	$(CC) $(CFLAGS) factorize.c -o factorize

linear_regression.: linear_regression.c
	$(CC) $(CFLAGS) linear_regression.c -o linear_regression

primes: primes.c
	$(CC) $(CFLAGS) primes.c -o primes

randgen: randgen.c
	$(CC) $(CFLAGS) randgen.c -o randgen

clean:
	rm -f $(TARGETS) a.out
