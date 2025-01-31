// Write a program that asks the user to enter
// a U.S. dollar amount and then shows how to
// pay that amount using the smallest number of
//$20,$10,$5,$1 bills:
#include <stdio.h>
int main() {
  int dollar_amount;
  int remaining_amount;
  int twenties;
  int tens;
  int fives;
  int ones;

  printf("Enter a dollar amount: ");
  scanf("%d", &dollar_amount);
  twenties = dollar_amount / 20;
  remaining_amount = dollar_amount - (twenties * 20);

  tens = remaining_amount / 10;
  remaining_amount = remaining_amount - (tens * 10);

  fives = remaining_amount / 5;
  remaining_amount = remaining_amount - (fives * 5);

  ones = remaining_amount / 1;
  remaining_amount = remaining_amount - (ones * 1);

  printf("$20 bills: %d\n", twenties);
  printf("$10 bills: %d\n", tens);
  printf("$5 bills: %d\n", fives);
  printf("$1 bills: %d\n", ones);
  return 0;
}
