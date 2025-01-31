// In one state, single residents are subject to the following income tax:
//
// Income           Amount of tax
// Not over $750    1% of Income
// $750-$2250       $7.50    plus 2% of amount over $750
// $2250-$3750      $37.50   plus 3% of amount over $2250
// $3750-$5250      $82.50   plus 4% of amount over $3750
// $5250-$7000      $142.50  plus 5% of amount over $5250
// Over $7000       $230.00  plus 6% of amount over $7000
//
// Write a program that asks the user to enter the amount of
// taxable income, then displas the tax due.
#include <stdio.h>

int main() {
  float taxable_income;
  printf("Enter amount of taxable income (xxxx.xx): ");
  scanf("%f", &taxable_income);

  if (taxable_income < 750) {
    printf("Tax Due: %.2f\n", taxable_income * .01);
  } else if (taxable_income < 2250) {
    printf("Tax Due: %.2f\n", ((taxable_income - 750) * .02) + 7.50);
  } else if (taxable_income < 3750) {
    printf("Tax Due: %.2f\n", ((taxable_income - 2250) * .03) + 37.50);
  } else if (taxable_income < 5250) {
    printf("Tax Due: %.2f\n", ((taxable_income - 3750) * .04) + 82.50);
  } else if (taxable_income < 7000) {
    printf("Tax Due: %.2f\n", ((taxable_income - 5250) * .05) + 142.50);
  } else {
    printf("Tax Due: %.2f\n", ((taxable_income - 7000) * .06) + 230.00);
  }
  return 0;
}
