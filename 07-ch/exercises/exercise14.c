#include <stdio.h>

int main() {
  float f, frac_part;

  f = 2.5987678f;
  frac_part = f - (int)f;
  printf("%f\n", frac_part);
}
