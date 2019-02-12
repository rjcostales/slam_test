CC     = clang
CFLAGS = -Ofast -Wall -std=c99

PROJECT := .
SOURCES := $(shell find $(PROJECT) -maxdepth 1 -type f -name "*.c")
HEADERS := $(shell find $(PROJECT) -maxdepth 1 -type f -name "*.h")
TARGETS := $(patsubst %.c,%,$(SOURCES))

all: $(TARGETS)

$(TARGETS):
	$(CC) $(CFLAGS) $@.c -o $@

clean:
	rm $(TARGETS)
