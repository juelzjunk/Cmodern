#include <stdio.h>

int main() {
  int d, n;
  printf("Enter number: ");
  scanf("%d", &n);

  for (d = 2; d * d <= n; d++)
    if (n % d == 0) {
      printf("%d is divisible by %d\n", n, d);
    }
  printf("%d is prime\n", n);
}
