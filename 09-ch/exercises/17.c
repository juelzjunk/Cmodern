// Rewrite the fact function so that itls no longer RECURSIVE
#include <stdio.h>

int fact(int n) {
  if (n <= 1)
    return 1;
  else
    return n * fact(n - 1);
}

int factCondensed(int n) { return n <= 1 ? 1 : n * fact(n - 1); }

int factNotrecursive(int n) {
  int i, result = n;
  for (i = 1; i < n; i++) {
    result *= i;
  }
  return result;
}

int main(void) {
  printf("%d\n", fact(5));
  printf("%d\n", factCondensed(5));
  printf("%d\n", factNotrecursive(5));
}
