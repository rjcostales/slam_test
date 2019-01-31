CC     = clang
CFLAGS = -Ofast -Wall
LFLAGS = -Lm

TARGETS = strfunc.o test
SOURCES = *.c
HEADERS = *.h

all: $(TARGETS)

test:
	$(CC) $(CLANG) -o test test.c strfunc.o

clean:
	rm -f $(TARGETS)
