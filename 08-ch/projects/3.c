
// Checking a number for repeated Digits
#include <stdbool.h>
#include <stdio.h>

int main() {

  int digit;
  long n;
  do {
    printf("Enter a number: ");
    scanf("%ld", &n);
    if (n <= 0) {
      return 0;
    }
    bool digit_seen[10] = {false};
    while (n > 0) {
      digit = n % 10;
      if (digit_seen[digit])
        break;
      digit_seen[digit] = true;
      n /= 10;
    }

    if (n > 0)
      printf("Repeated digit\n");
    else {
      printf("No repeated digit\n");
    }

    printf("Enter a number: ");
    scanf("%ld", &n);
  } while (n > 0);
  return 0;
}
