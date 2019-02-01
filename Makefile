CC     = clang
CFLAGS = -Ofast -Wall
LFLAGS = -Lm

TARGETS = strfunc.o strTest
SOURCES = *.c
HEADERS = *.h

all: $(TARGETS)

strTest:
	$(CC) $(CLANG) -o strTest strTest.c strfunc.o

clean:
	rm -f $(TARGETS)
