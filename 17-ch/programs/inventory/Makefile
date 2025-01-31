CC = gcc
CFLAGS = -Wall -Wextra -Werror

inventory: inventory.o readline.o
	$(CC) $(CFLAGS) -o $@ $^

inventory.o: inventory.c readline.h
	$(CC) $(CFLAGS) -c $^


readline.o: readline.c readline.h
	$(CC) $(CFLAGS) -c $^

.PHONY:
clean:
	rm -f *.o *.h.gch
