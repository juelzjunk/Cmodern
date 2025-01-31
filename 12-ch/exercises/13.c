// Section 8.2 had a program fragment in which two nested for loops
// initialized the array indent for use as an identity matrix.
// Rewrite this code, using a single pointer to step through the
// array one element at a time.
//
// Hint:  Since we wont be using row and col index variables,
// it wont be easy to tell where to store 1. Instead, we can use
// the fact that the first element of the array should be 1,
// the next N elements should be 0, the next element should be 1,
// and so forth. Use a variable to keep track of how many
// consecutive 0s have been stored; when the count reaches N, its time to
// store 1.

// for (row = 0; row < N; row++) {
//   for (col = 0; col < N; col++) {
//     if (row == col)
//       indent[row][col] = 1.0;
//     else
//       indent[row][col] = 0.0;
//   }
// }
// for (row = 0; row < N; row++) {
//   for (col = 0; col < N; col++) {
//     printf(" %g", indent[row][col]);
//   }
//   printf("\n");
// }
#include <stdio.h>
#define N 10
int main() {
  double indent[N][N], *pIndent;
  int zero = N;
  int row, col;

  for (pIndent = &indent[0][0]; pIndent <= &indent[N - 1][N - 1]; pIndent++) {
    if (zero == N) {
      *pIndent = 1;
      zero = 0;
    } else {
      *pIndent = 0;
      zero++;
    }
  }
  for (row = 0; row < N; row++) {
    for (col = 0; col < N; col++) {
      printf(" %g", indent[row][col]);
    }
    printf("\n");
  }
}
