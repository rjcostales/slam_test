CC     = clang
CFLAGS = -Ofast -Wall -std=c99
LFLAGS = -lm

PROJECT := .
SOURCES := $(shell ls *.c)
HEADERS := $(shell ls *.h)
OBJECTS := $(shell ls *.o)
TARGETS := $(patsubst %.c,%,$(SOURCES))

all: $(TARGETS)

$(TARGETS):
	$(CC) $(CFLAGS) $(LFLAGS) $@.c -o $@

math:
	$(CC) $(CFLAGS) -c math.c -o math.o

math_test:
	$(CC) $(CFLAGS) $(LFLAGS) math_test.c math.o -o $@

clean:
	rm -f $(TARGETS) $(OBJECTS)
