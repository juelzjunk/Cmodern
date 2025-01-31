
#include <stdio.h>
int main() {
  int i = (('G' - 'A') + 3) % 26 + 'A'; // code given in hint
  printf("%d\n", i);
}
