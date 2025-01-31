CC = clang
CFLAGS = -Wall -Wextra -Werror

justify: justify.o word.o line.o
	$(CC) $(CFLAGS) -o $@ $^

justify.o: justify.c word.h line.h
	$(CC) $(CFLAGS) -c $^

word.o: word.c word.h
	$(CC) $(CFLAGS) -c $^

line.o: line.c line.h
	$(CC) $(CFLAGS) -c $^

.PHONY: clean
clean: 
	@rm -f main *.o *.gch
