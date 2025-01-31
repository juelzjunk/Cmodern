
// sums a series of numbers ( using long variables )
#include <stdio.h>

int main() {
  double n, sum = 0;

  printf("This program sums a series of integers\n");
  printf("Enter intergers (0 to terminate): ");
  scanf("%lf", &n);

  while (n != 0) {
    sum += n;
    scanf("%lf", &n);
  }
  printf("Sum is: %f\n", sum);

  return 0;
}
