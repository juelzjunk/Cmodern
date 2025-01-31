// Write the following function:
//
// void find_two_largest(int a[], int n, int *largest, int *second_largest);
//
// When passed an array a of length n, the function will search a for
// its largest and second largest elements, storing them in the variables
// pointed to by largest and second_largest, respectively.

#include <stdio.h>

#define N 10

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void) {
  int first_place, second_place;
  int a[N] = {98, 100, 43, 23, 9, 1, 99, 64, 54, 0};

  find_two_largest(a, N, &first_place, &second_place);

  printf("Largest= %d, Second Largest= %d\n", first_place, second_place);
}
void find_two_largest(int a[], int n, int *largest, int *second_largest) {
  int i;
  *largest = 0;
  *second_largest = 0;
  for (i = 0; i < N; i++) {
    if (*largest < a[i])
      *largest = a[i];
    if (*second_largest < a[i] && a[i] < *largest)
      *second_largest = a[i];
  }
}
