CC = gcc
CFLAGS = -Wall -Wextra -Werror

6-10: 6-10.o stack.o
	$(CC) $(CFLAGS) -o $@ $^

6-10.o: 6-10.c stack.h
	$(CC) $(CFLAGS) -c $^

stack.o: stack.c stack.h
	$(CC) $(CFLAGS) -c $^

.PHONY:
clean:
	@rm -f *.o *.h.gch
