// Write a program that asks the user to enter a fraction,
// then reduces the fraction to lowest terms:
//
// Enter a fraction: 6/12
// In lowest terms: 1/2
//
// Hint: To reduce a fraction to lowest terms, first compute the GCD of the
// numerator and denominator. Then divide both the numerator and denominator by
// the GCD.
#include <stdio.h>

int main() {
  int n, m;
  printf("Enter a fraction: ");
  scanf("%d/%d", &n, &m);
  int numerator = n;
  int denominator = m;
  while (n != 0) {
    int r = m % n;
    m = n;
    n = r;
  }
  // m is gcd
  printf("In lowest terms: %d/%d\n", numerator / m, denominator / m);
}
