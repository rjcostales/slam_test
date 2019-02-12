CC		= clang
CFLAGS	= -Wall -std=c99
LIBS	= -lm

SRCS	:= $(wildcard *.c)
HDRS	:= $(wildcard *.h)
OBJS	:= $(wildcard *.o)
TGTS	:= $(patsubst %.c,%,$(SRCS))

all:$(TGTS)

$(TGTS):$(SRCS)
	$(CC) $(CFLAGS) $(LIBS) $< -o $@

math:
	$(CC) -Ofast $(CFLAGS) -c math.c -o math.o

math_test:
	$(CC) $(CFLAGS) $(LIBS) math_test.c math.o -o $@

clean:
	rm -f $(TGTS) $(OBJS)
