// Show how to replace a continue statement by an equivalent goto statement
#include <stdio.h>

int main() {
  int i = 100, j = 100;

  while (i /= 2) {
    if (i == 12)
      continue;
    printf("%d ", i);
  }
  printf("\n\n");

  while (j /= 2) {
    if (j == 12) {
      goto skip;
    }
    printf("%d ", j);

  skip:;
  }
}
