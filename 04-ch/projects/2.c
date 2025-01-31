// Extend project 1 to handle 3 digit numbers.
#include <stdio.h>

int main() {
  int n;
  printf("Enter a three-digit number: ");
  scanf("%d", &n);
  printf("The reversal is: %d%d%d\n", n % 10, (n % 100) / 10, n / 100);
  return 0;
}
