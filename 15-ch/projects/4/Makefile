CC= gcc
CFLAGS= -Wall -Werror -Wextra

remind: readline.o remind.o
	$(CC) $(CFLAGS) -o $@ $^

readline.o: readline.c readline.h
	$(CC) $(CFLAGS) -c $^

remind.o: remind.c readline.h
	$(CC) $(CFLAGS) -c $^

.PHONY: 
clean:
	@rm *.o *.h.gch

