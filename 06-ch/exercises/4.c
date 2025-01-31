#include <stdio.h>

int main() {
  int i, j, k;

  for (i = 0; i < 10; i++)
    printf("%d ", i);
  printf("\n\n");
  for (j = 0; j < 10; ++j)
    printf("%d ", j);
  printf("\n\n");
  for (k = 0; k++ < 10;)
    printf("%d ", k);
  printf("\n\n");
}
