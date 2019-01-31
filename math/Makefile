CC = clang
CFLAGS = -Ofast
LFLAGS = -lm

TARGETS = math.o mathTest factorize area pi semi primes randgen sizes dhrystone whetstone a.out
SOURCES = *.c
HEADERS = *.h

all: math factorize area pi semi primes randgen sizes dhrystone whetstone 

math: math.o math.h
	$(CC) $(CFLAGS) -c math.c -o math.o

mathTest: mathTest.c
	$(CC) $(CFLAGS) mathTest.c math.o -o mathTest

factorize: math.c
	$(CC) $(CFLAGS) -c factorize.c -o factorize

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
	$(CC) $(LFLAGS) whetstone.c -o whetstone

clean:
	rm -f $(TARGETS)
