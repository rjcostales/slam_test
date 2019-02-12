CC		= clang
CFLAGS	= -Wall -std=c99
LIBS	= -lm

SRCS	:= $(wildcard *.c)
HDRS	:= $(wildcard *.h)
OBJS	:= $(wildcard *.o)
TGTS	:= $(patsubst %.c,%,$(SRCS))

all:$(TGTS)

$(TGTS):
	$(CC) $(CFLAGS) $(LIBS) $@.c -o $@

math_test:math
	$(CC) $(CFLAGS) $(LIBS) $@.c math.o -o $@

math:
	$(CC) $(CFLAGS) -c $@.c -o $@.o

clean:
	rm -f $(TGTS) $(OBJS)
