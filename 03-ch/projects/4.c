// Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
// You entered 404.817.6900
#include <stdio.h>

int main() {
  int x, y, z;
  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &x, &y, &z);
  printf("You entered %.3d.%.3d.%.4d\n", x, y, z);
  return 0;
}
