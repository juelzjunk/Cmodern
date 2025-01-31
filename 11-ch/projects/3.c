/*
 * Modify Project 3 Chapter 6 so that it includes the following function:
 *
 * void reduce (int numerator, int denominator, int *reduced_numerator, int
 * *reduced_denominator);
 *
 * numerator and denominator are the numerator and denominator of a fraction.
 * reduced_numerator and reduced_denominator are pointers to variable in which
 * the function will store the numerator and denominator of the fraction once it
 * has been reduced to lowest terms.
 * */
#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator,
            int *reduced_denominator);

int main(void) {

  int numerator = 0, denominator = 0, reduced_numerator = 0,
      reduced_denominator = 0;

  printf("Enter a fraction: ");
  scanf("%d/%d", &numerator, &denominator);
  reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

  printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);
}

void reduce(int numerator, int denominator, int *reduced_numerator,
            int *reduced_denominator) {
  int remainder = 0, n = numerator, gcd = denominator;
  while (n != 0) {
    remainder = gcd % n;
    gcd = n;
    n = remainder;
  }
  *reduced_denominator = denominator / gcd;
  *reduced_numerator = numerator / gcd;
}
