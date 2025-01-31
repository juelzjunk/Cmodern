// Write a single expression whose value is either -1,0, or +1,
// depending on whether i is less than, equal to, or greater than j.
// respectively.
#include <stdio.h>

int main() {
  int i = 3;
  int j = 2;
  printf("%d", (i > j) - (i < j));
}
