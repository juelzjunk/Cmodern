/*The Fibonacci numbers are 0, ,1 ,1 ,2 ,3 ,5 8, 13,...,
 * where each number is the sum of the two preceding numbers.
 * Write a program fragment that declares an array named fib_numbers of length
 * 40 and fills the array with the first 40 Fibonacci numbers. Hint: Fill in the
 * first two numbers individually, then use a loop to compute the remaining
 * numbers.*/
#include <stdio.h>
#define N 40

int main() {

  int fib_numbers[N] = {0, 1};
  int i;

  printf("%d ", fib_numbers[0]);
  printf("%d ", fib_numbers[1]);

  for (i = 2; i < N; i++) {
    fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
    printf("%d ", fib_numbers[i]);
  }

  printf("\n");
}
