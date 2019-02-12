CC     = clang
CFLAGS = -Ofast -Wall -std=c99

PROJECT := .
SOURCES := $(shell ls *.c)
HEADERS := $(shell ls *.h)
TARGETS := $(patsubst %.c,%,$(SOURCES))

all: $(TARGETS)

$(TARGETS):
	$(CC) $(CFLAGS) $@.c -o $@

clean:
	rm $(TARGETS)
