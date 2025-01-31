#include <stdio.h>

#define N 10

int main() {

  int a[N];

  printf("%ld\n", sizeof(a) / sizeof(a[0]));
}
