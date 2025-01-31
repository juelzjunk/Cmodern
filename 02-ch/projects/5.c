// prompt user for x then display the value of:
// 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6

#include <stdio.h>
int main() {
  int x;
  int value;
  printf("What is x: ");
  scanf("%d", &x);

  int f = (x * x * x * x * x);
  int u = (x * x * x * x);
  int c = (x * x * x);
  int k = (x * x);
  int me = (7 * x);

  value = 3 * f + 2 * u - 5 * c - k + me - 6;

  printf("if x = %d\n", x);
  printf("Then the value of 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 is: %d,\n",
         value);
  return 0;
}
