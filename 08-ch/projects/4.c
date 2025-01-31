// Modify the reverse.c program of Section 8.1 to use the expression
//(int) (sizeof (a) / sizeof(a [0]))
//(or a macro with this value) for the array length.
//  this program prompts the user to enter a series of numbers
//
//  then writes the numbers in reverse order:
//       Enter 10 numbers: 34 82 49 102 7 94 23 11 50 31
//       In reverse order: 31 50 11 23 94 7 102 49 82 34
#include <stdio.h>

#define N 10

int main() {
  int a[N], i;

  printf("Enter %d numbers: ", (int)(sizeof(a) / sizeof(a[0])));
  for (i = 0; i < N; i++)
    scanf("%d", &a[i]);

  printf("In reverse order:");
  for (i = N - 1; i >= 0; i--)
    printf(" %d", a[i]);
  printf("\n");

  return 0;
}
