// Rewrite hte following loop so that its body is empty:
//      for (n=0; m>0; n++)
//        m /= 2;
#include <stdio.h>

int main() {

  int n, m = 100;
  for (n = 0; m > 0; n++, m /= 2)
    ;
  printf("%d\t%d", n, m);
}
