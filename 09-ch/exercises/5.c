// write function num_digits(n) that returns the number of digits in n
// (a positive int)
#include <stdio.h>
#include <stdlib.h>

int num_digits(int n);

int main(int argc, char *argv[]) {
  int n;
  printf("Enter num_digit: ");
  scanf("%d", &n);
  printf("%d\n", num_digits(n));

  return EXIT_SUCCESS;
}
int num_digits(int n) {
  int digits;
  for (digits = 0; n != 0; digits++)
    n /= 10;
  return digits;
}
