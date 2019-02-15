CC		= gcc
CFLAGS	= -std=c11
LIBS	= -lm

SRCS	:= $(wildcard *.c)
HDRS	:= $(wildcard *.h)
OBJS	:= $(wildcard *.o)
TGTS	:= $(patsubst %.c,%,$(SRCS))

all:$(TGTS)

$(TGTS): dhrystone-reg
	$(CC) $(CFLAGS) $@.c -o $@ $(LIBS)

dhrystone-reg:
	$(CC) $(CFLAGS) -DREG=register dhrystone.c -o $@

clean:
	rm -f $(TGTS) dhrystone-reg $(OBJS)
