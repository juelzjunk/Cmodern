// Let DOUBLE be the following macro:
//      #define DOUBLE(x) 2*x
//  (a) What is the value of DOUBLE(1+2)?
//  (b) What is the value of 4/DOUBLE(2)?
//  (c) Fix the definition of DOUBLE
#include <stdio.h>

// #define DOUBLE(x) 2*x
#define DOUBLE(x) (2 * (x))

int main(void) {
  printf("%d\n", DOUBLE(1 + 2));
  printf("%d\n", 4 / DOUBLE(2));
}
