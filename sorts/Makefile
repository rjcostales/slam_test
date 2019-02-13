CC		= gcc
CFLAGS	= -Ofast -Wall -std=c11

SRCS	:= $(wildcard *.c)
HDRS	:= $(wildcard *.h)
TGTS	:= $(patsubst %.c,%,$(SRCS))

all:$(TGTS)

clean:
	rm -f $(TGTS)
