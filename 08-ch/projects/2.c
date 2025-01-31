
// Checking a number for repeated Digits
#include <stdbool.h>
#include <stdio.h>

int main() {

  bool digit_seen[10] = {false};
  int occurences[10] = {0};
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0) {
    digit = n % 10;
    digit_seen[digit] = true;
    occurences[digit]++;
    n /= 10;
  }
  printf("Digits:     ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", i);
  }
  printf("\n");
  printf("Occurences: ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", occurences[i]);
  }
  printf("\n");
  return 0;
}
