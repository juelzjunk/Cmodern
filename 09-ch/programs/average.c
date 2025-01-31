// Enter three numbers: 3.5 9.6 10.2
// Average of 3.5 and 9.6: 6.55
// Average of 9.6 and 10.2: 9.9
// Average of 3.5 and 10.2: 6.85
//
// Computes pairwise averages of three numbers
#include <stdio.h>

double average(double a, double b) { return (a + b) / 2; }

int main() {
  double x, y, z;

  printf("Enter three numbers: ");
  scanf("%lf%lf%lf", &x, &y, &z);
  printf("Average of %g and %g: %g\n", x, y, average(x, y));
  printf("Average of %g and %g: %g\n", y, z, average(y, z));
  printf("Average of %g and %g: %g\n", x, z, average(x, z));

  return 0;
}
