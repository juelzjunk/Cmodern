// Modify the maxmin.c program of section 11.4 so that the max_min function uses
// a pointer instead of an integer to keep track of current position in the
// array

// Finds the largest and smallest elements in an array

#include <stdio.h>

#define N 10

void max_min(int a[N], int n, int *max, int *min);

int main(void) {
  int a[N] = {8, 2, 3, 4, 7, 96, 7, 8, 9, 10}, big, small;
  max_min(a, N, &big, &small);
  printf("Largest: %d\n", big);
  printf("Smallest: %d\n", small);
  return 0;
}

void max_min(int a[N], int n, int *max, int *min) {
  int *pA;
  *max = *min = *a;
  for (pA = a + 1; pA <= a + (n - 1); pA++)
    if (*pA > *max)
      *max = *pA;
    else if (*pA < *min)
      *min = *pA;
}
