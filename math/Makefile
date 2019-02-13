CC		= gcc
CFLAGS	= -Wall -std=c11
LIBS	= -lm

SRCS	:= $(wildcard *.c)
HDRS	:= $(wildcard *.h)
OBJS	:= $(wildcard *.o)
TGTS	:= $(patsubst %.c,%,$(SRCS))

all:$(TGTS)

$(TGTS):
	$(CC) $(CFLAGS) $(LIBS) $@.c -o $@

clean:
	rm -f $(TGTS) $(OBJS)
