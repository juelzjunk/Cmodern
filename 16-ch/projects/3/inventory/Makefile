CC = gcc
CFLAGS = -Wall -Wextra -Werror

inventory: inventory.o readline.o quicksort.o
	$(CC) $(CFLAGS) -o $@ $^

inventory.o: inventory.c readline.h quicksort.h
	$(CC) $(CFLAGS) -c $^

readline.o: readline.c readline.h
	$(CC) $(CFLAGS) -c $^

quicksort.o: quicksort.c quicksort.h
	$(CC) $(CFLAGS) -c $^

.PHONY:
clean:
	rm -f *.o *.h.gch
