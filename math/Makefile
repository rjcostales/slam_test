CC     = clang
CFLAGS = -Ofast
LFLAGS = -lm

TARGETS = math.o mathTest factorize area pi semi primes randgen sizes dhrystone whetstone a.out
SOURCES = *.c
HEADERS = *.h

all: math mathTest factorize primes randgen area pi semi sizes dhrystone whetstone

math: math.c
	$(CC) $(CFLAGS) -c math.c -o math.o

mathTest: mathTest.c
	$(CC) $(CFLAGS) mathTest.c math.o -o mathTest

factorize: factorize.c
	$(CC) $(CFLAGS) factorize.c -o factorize $(LFLAGS)

area: area.c
	$(CC) $(CFLAGS) area.c -o area $(LFLAGS)

pi: pi.c
	$(CC) $(CFLAGS) pi.c -o pi $(LFLAGS)

semi: semi.c
	$(CC) $(CFLAGS) semi.c -o semi $(LFLAGS)

primes: primes.c
	$(CC) $(CFLAGS) primes.c -o primes

randgen: randgen.c
	$(CC) $(CFLAGS) randgen.c -o randgen

sizes: sizes.c
	$(CC) $(CFLAGS) sizes.c -o sizes

dhrystone: dhrystone.c
	$(CC) $(CFLAGS) dhrystone.c -o dhrystone

whetstone: whetstone.c
	$(CC) whetstone.c -o whetstone $(LFLAGS)

clean:
	rm -f $(TARGETS)
