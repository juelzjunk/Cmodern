// Write the following function:
//
// void find_two_largest(const int *a, int n, int *largest, int
// *second_largest);
//
// a points to an array length n. the funstion searches for its largest and
// second_largest elements, storing them in the variables pointed to by largest
// and second_largest, respectively.

#include <stdio.h>

#define N 10
void find_two_largest(const int *a, int n, int *largest, int *second_largest);
int main(void) {
  int largest, second_largest, a[] = {99, 2, 3, 8, 9, 3, 4, 101, 9, 2};
  find_two_largest(a, N, &largest, &second_largest);
  printf("%d %d\n", largest, second_largest);
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest) {
  const int *pA = a;
  *largest = *pA;
  *second_largest = 0;

  for (; pA < a + n; pA++) {
    if (*pA > *largest) {
      *second_largest = *largest;
      *largest = *pA;
    } else if (*pA < *largest && *pA > *second_largest)
      *second_largest = *pA;
  }
}
