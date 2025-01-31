// Modify the find_middle function of section 11.5 so that
// it uses pointer arithmetic to calculate the return value.

//     return &a[n/2];
// }
#include <stdio.h>
#define N 5
int *find_middle(int *pA, int n);

int main(void) {
  int a[] = {1, 2, 3, 4, 5};

  printf("findmiddle=%d\n", *find_middle(a, N));
}
int *find_middle(int *pA, int n) { return (pA + N / 2); }
