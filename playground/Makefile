all: main cleaner

CC = gcc
CFLAGS = -g -fsanitize=address -Wall -Werror -pedantic -std=c11 -lm 

SRCS = $(shell find . -name '.ccls-cache' -type d -prune -o -type f -name '*.c' -print)
OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.d)

%.d: %.c
	@set -e; rm -f $@; \
	$(CC) -MM $(CFLAGS) $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$

include $(DEPS)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o "$@"

main-debug: $(OBJS)
	$(CC) $(CFLAGS) -O0 $(OBJS) -o "$@"

clean:
	rm -f $(OBJS) $(DEPS) main main-debug
cleaner:
	rm -f *.o *.d
