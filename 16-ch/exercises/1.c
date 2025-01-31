#include <stdio.h>
int main() {

  struct {
    int x, y;
  } x;
  struct {
    int x, y;
  } y;

  x.x = 1;
  y.x = 2;
  y.y = 3;
  x.y = 4;

  printf("%d\n", x.x);
  printf("%d\n", y.x);
  printf("%d\n", y.y);
  printf("%d\n", x.y);
}
