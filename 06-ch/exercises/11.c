#include <stdio.h>

int main() {
  int sum = 0;
  for (int i = 0; i < 10; i++) {
    if (i % 2)
      continue;
    sum += i;
    printf("%d", i);
  }
  printf("\n\n%d\n", sum);
}
