// For each of the following macros, give an example that illustrates a problem
// with the macro and show how to fix it.
//  (a) #define AVG(x,y) (x+y)/2
//  (b) #define AREA(x,y) (x)*(y)

#include <stdio.h>

#define AVG(x, y) (((x) + (y)) / 2)
#define AREA(x, y) ((x) * (y))

int main(void) {
  int x = 8, y = 2;
  printf("%d\n", AVG(x, y));
  printf("%d\n", AREA(x, y));
}
