#include <stdio.h>

int main() {
  int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
  int *p = &a[1], *q = &a[5];

  printf("*(p+3)=%d\n", *(p + 3));
  printf("*(q-3)=%d\n", *(q - 3));
  printf("q-p=%ld\n", q - p);

  if (p < q)
    printf("true\n");
  else
    printf("false\n");

  if (*p < *q)
    printf("true\n");
  else
    printf("false\n");
}
