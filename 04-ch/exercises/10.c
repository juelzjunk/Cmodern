// Show the output produced by each of the following program fragments.
// assume that i and j are int variables.
#include <stdio.h>

int main() {
  int i, j;
  //(a)
  //    i = 6;
  //    j = i += i;
  //   printf("%d %d\n", i, j);
  //   (b)
  //   i = 5;
  //   j = (i -= 2) + 1;
  //   printf("%d %d\n", i, j);
  // (c)
  // i = 7;
  // j = 6 + (i = 2.5);
  // printf("%d %d\n", i, j);
  //(d)
  i = 2;
  j = 8;
  j = (i = 6) + (j = 3);
  printf("%d %d\n", i, j);
}
