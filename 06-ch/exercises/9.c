// write 8.c in a while loop
#include <stdio.h>

int main() {
  int i = 10;
  /*
do {
  printf("%d ", i++);
  i /= 2;
} while (i >= 1);
      */
  while (i > 1) {
    printf("%d ", i++);
    i /= 2;
  }
}
