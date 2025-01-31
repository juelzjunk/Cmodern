// Rewrite the followig function to use pointer arithmetic instead of array
// subscripting. (In other words, eliminate the variable i and all uses of the
// [] operator.) make as few changes as possible.
#include <stdio.h>

int sum_array(int a[], int n);

int main(void) {
  int array[] = {1, 2, 3, 4, 5};
  printf("%d\n", sum_array(array, 5));
}
// int sum_array(const int a[], int n) {
//   int i, sum;
//
//   sum = 0;
//   for (i = 0; i < n; i++)
//     sum += a[i];
//   return sum;
//
int sum_array(int a[], int n) {
  int *p, sum;

  sum = 0;
  for (p = a; p < a + n; p++)
    sum += *p;
  return sum;
}
