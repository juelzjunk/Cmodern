// write a function digit(n,k) that returns the k-th digit (from the right) in n
// (a positive int). for example, digit(829,1) returns 9, digit(829,2) returns
// 2, and digit(829,3) returns 8. if k is greater than the number of digits in
// n, have the function retuirn 0.

#include <stdio.h>
#include <stdlib.h>

int digit(int n, int k);

int main(int argc, char *argv[]) {
  int n, k;
  printf("Enter n and k: ");
  scanf("%d %d", &n, &k);
  printf("%d\n", digit(n, k));

  return EXIT_SUCCESS;
}
int digit(int n, int k) {
  int i;
  for (i = 1; i < k; i++) {
    n /= 10;
  }
  return n %= 10;
}
