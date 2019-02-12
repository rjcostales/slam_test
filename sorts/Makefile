CC		= clang
CFLAGS	= -Ofast -Wall -std=c99

SRCS	:= $(wildcard *.c)
HDRS	:= $(wildcard *.h)
TGTS 	:= $(patsubst %.c,%,$(SRCS))

all:$(TGTS)

$(TGTS):$(SRCS)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(TGTS)
