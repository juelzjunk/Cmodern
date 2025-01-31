

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
  int i, n, b;
  char ch;
  // int i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);
  getchar();
  for (i = 1; i <= n; i++) {
    if (i % 24 == 0) {
      printf("Press Enter to continue...");
      while (getchar() != '\n')
        ;
    }
    printf("%10d%10d\n", i, i * i);
  }
  return 0;
}
