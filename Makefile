CC     = clang
CFLAGS = -Ofast -Wall
LFLAGS = -Lm

TARGETS = strfunc.o strtest
SOURCES = *.c
HEADERS = *.h

all: $(TARGETS)

strtest:
	$(CC) $(CFLAGS) -o strtest strtest.c strfunc.o

clean:
	rm -f $(TARGETS)
