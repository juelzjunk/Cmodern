
// for (int n = result_num, d = result_denom; r > 0;)
// if (result_num > result_denom)
//   r = result_num % result_denom;
// else {
//   r = result_denom % result_num;
#include <stdio.h>

int main() {
  int d, n, a, b, r = 1, gcd = 1;
  printf("Enter 2 number: ");
  scanf("%d%d", &n, &d);
  if (d > n) {
    a = d;
    b = n;
  } else if (n > d) {
    a = n;
    b = d;
  }

  for (; r > 0; a = b, b = r) {
    r = a % b;
  }

  printf("%d/%d\n", n / a, d / a);
}
