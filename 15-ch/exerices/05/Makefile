CC = gcc
# CC = clang
CFLAGS = -Wall -Wextra -Werror


main: main.o f1.o f2.o
# @$(CC) $(CFLAGS) -o main main.o f1.o f2.o
	@$(CC) $(CFLAGS) -o $@ $^
	@echo "Linking main"
main.o: main.c f1.h
 # @$(CC) $(CFLAGS) -c main.c 
	@$(CC) $(CFLAGS) -c $^
	@echo "Compiling main.o"
f1.o: f1.c f1.h f2.h 
# @$(CC) $(CFLAGS) -c f1.c
	@$(CC) $(CFLAGS) -c $^
	@echo "Compiling f1.o"
f2.o: f2.c f1.h f2.h
# @$(CC) $(CFLAGS) -c f2.c
	@$(CC) $(CFLAGS) -c $^
	@echo "Compiling f2.o"

.PHONY: clean
clean: 
	@rm -f main *.o *.gch
