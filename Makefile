CC     = clang
CFLAGS = -Ofast -Wall
LFLAGS = -Lm

TARGETS = strfunc.o strTest
SOURCES = *.c
HEADERS = *.h

all: $(TARGETS)

strTest:
	$(CC) $(CLANG) -o strTest test.c strfunc.o

clean:
	rm -f $(TARGETS)
