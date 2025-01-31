// Rearrange the square3.c program so that the for loop initializes
// i, tests i, and increments i.
// Don't rewrite the program; in particular, don't use any multiplications.

// Prints a table of squares using a for statement
//
// This program prints a table of squares.
// Enter number of entries in table: 5
//      1       1
//      2       4
//      3       9
//      4      16
//      4      25
#include <stdio.h>
int main() {
  int i, n, odd, square;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);

  odd = 3;
  for (i = 1, square = 1; i <= n; odd += 2, ++i) {
    printf("%10d%10d\n", i, square);
    square += odd;
  }
  return 0;
}
