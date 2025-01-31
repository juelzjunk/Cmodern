#include <stdio.h>

int main() {
  int n, f;
  int j, i;
  float a, w;
  printf("Enter value for e: ");

  for (a = 0, f = 0; a < w; ++f) {
    if (a == 0)
      a += 1;
    for (j = 0; j < f; j++) {
      if (j == 0) {
        i = f;
      } else {
        i *= (f - j);
      }
    }
    a += 1.0 / i;
  }
  printf("n = %d\n", n);
  printf("j = %d\n", j);
  printf("i = %d\n", i);
  printf("a = %f\n", a);
}
