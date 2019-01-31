CC     = clang
CFLAGS = -Ofast -Wall

TARGETS = fib0 fib1 fib2 fib3 fib4 fibT
SOURCES = *.c
HEADERS = *.h

all: $(TARGETS)

fib0: fibonacci0.c
	$(CC) $(CFLGS) fibonacci0.c -o fib0

fib1: fibonacci1.c
	$(CC) $(CFLGS) fibonacci1.c -o fib1

fib2: fibonacci2.c
	$(CC) $(CFLGS) fibonacci2.c -o fib2

fib3: fibonacci3.c
	$(CC) $(CFLGS) fibonacci3.c -o fib3

fib4: fibonacci4.c
	$(CC) $(CFLGS) fibonacci4.c -o fib4

fibT: fibonacciT.c
	$(CC) $(CFLGS) fibonacciT.c -o fibT

clean:
	rm -f $(TARGETS)
