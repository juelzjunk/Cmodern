// Let a be an array of 100 integers. Write a call of qsort that sorts only the
// last 50 elements in. (You don't need to write the comparison function).
#include <stdlib.h>
int compare_int(const void *p, const void *q);
int main() {
  int a[100];
  qsort(&a[50], 50, sizeof(a[0]), compare_int);
}
