#include <stdio.h>

int main() {
  // while
  int w = 10;
  while (w > 0) {
    printf("T minus %d and counting\n", w);
    w--;
  }
  printf("\n\n");
  // do
  int d = 10;
  do {
    printf("T minus %d and counting\n", d);
    --d;
  } while (d > 0);
  printf("\n\n");
  // for
  int i;
  for (i = 10; i > 0; i--)
    printf("T minus %d and counting\n", i);
}
