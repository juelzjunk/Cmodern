
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a[4] = {0}, *p;
  p = a;

  if (p[0] == a[0])
    printf("yes\n");
  else
    printf("no\n");

  return EXIT_SUCCESS;
}
