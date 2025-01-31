CC = clang
CFLAGS = -Wall -Wextra -Werror

qsort: qsort.o quicksort.o
	$(CC)  $(CFLAGS) -o $@ $^
	
qsort.o: qsort.c quicksort.h
	$(CC)  $(CFLAGS) -c $^

quicksort.o: quicksort.c quicksort.h
	$(CC)  $(CFLAGS) -c $^

.PHONY: clean
clean:
	@rm -f *.o *.gch
