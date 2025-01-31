// Condense the dweight.c program by
// (1)replacing the assignments to height,
// length, and width with initializers.
// (2)remove weight variable, instead
// calculate (volume+165)/166 within printf.
#include <stdio.h>

int main() {
  int height = 8;
  int length = 12;
  int width = 10;
  int volume = height * length * width;

  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

  return 0;
}
