// write a function gcd(m,n) that calculates the greatest common divisor or the
// integers m and n. project 2 ch 6 describes Euclids algorithm for computing
// the GCD
#include <stdio.h>
int gcd(int m, int n) {
  int r;
  while (n != 0) {
    r = m % n;
    m = n;
    n = r;
  }
  // m is GCD
  return m;
}

int main() {
  int n, m, r;
  printf("Enter to integers: ");
  scanf("%d%d", &m, &n);

  printf("Greatest common divisor: %d\n", gcd(m, n));
}
