#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // Suppose that f and p are declared as follows:
  struct {
    union {
      char a, b;
      int c;
    } d;
    int e[5];
  } f, *p = &f;
}
