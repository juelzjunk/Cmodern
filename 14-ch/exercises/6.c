// (a) Write a macro DISP(f,x) that expands into a call of printf that displays
// the value of the function f when called with argument x. For example,
//      DISP(sqrt,3.0);
//  should expand into
//      printf("sqrt(%g) = %g\n", 3.0, sqrt(3.0));
// (b) Write a macro DISP2(f,x,y) that's similar to DISP but works for functions
// with two arguments.
#include <math.h>
#include <stdio.h>

#define DISP(f, x) printf(#f "(%g) = %g\n", (x), (f((x))))
#define DISP2(f1, x1, y1)                                                      \
  printf(#f1 "(%g,%g) = %g\n", (x1), (y1), (f1)((x1), (y1)))

int main() {
  DISP(sqrt, 3.0);
  DISP2(pow, 2.0, 2.0);
}
