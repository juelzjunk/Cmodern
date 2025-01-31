#include <stdio.h>

int main() {
  int n, m, r;
  printf("Enter to integers: ");
  scanf("%d%d", &n, &m);

  while (n != 0) {
    r = m % n;
    m = n;
    n = r;
  }
  // m is gcd

  printf("Greatest commoon divisor: %d\n", m);
}
