#include <stdio.h>

int main() {
  int a[] = {23, 5, 66, 45, 8, 5, 15, 34, 54, 14, 2, 52, 72};
  int *middle, *low = &a[1], *high = &a[3];
  // middle  = (low+high)/2;
  printf("%p\n", low);
  middle = low + (low - high) / 2;
  printf("%p\n", middle);
  printf("%p\n", high);
  printf("%d\n", *middle);
}
