// Modify Programming Project 5 from Chapter 5 so that it uses a function
// to compute the amount of income tax. When passed an amounbt of taxable
// income, the function will return the tax due.
#include <stdio.h>

float tax_due(float a);

int main(void) {
  float a;

  printf("Enter amount of taxable income (xxxx.xx): ");
  scanf("%f", &a);
  printf("Tax Due: $%.2f\n", tax_due(a));

  return 0;
}
float tax_due(float a) {
  if (a < 750) {
    return a * .01;
  } else if (a < 2250) {
    return ((a - 750) * .02) + 7.50;
  } else if (a < 3750) {
    return ((a - 2250) * .03) + 37.50;
  } else if (a < 5250) {
    return ((a - 3750) * .04) + 82.50;
  } else if (a < 7000) {
    return ((a - 5250) * .05) + 142.50;
  } else {
    return ((a - 7000) * .06) + 230.00;
  }
}
