// This program creates a magic square of a specified size.
// The size must be an odd number between 1 and 99.
// Enter size of magic square: 5
//      17  24  1   8   15
//      23  5   7   14  16
//      4   6   13  20  22
//      10  12  19  21  3
//      11  18  25  2   9
//
#include <stdio.h>

int main() {
  int n = 0, i = 0, j = 0, oldi = 0, oldj = 0, magicnum = 1;
  printf(
      "This program creats a magic square of a specified sixe.\nThe size must "
      "be an odd number between 1 and 99.\nEnter size of magic square: ");
  scanf("%d", &n);
  while (n % 2 == 0 || n > 99 || n < 1) {
    printf("Invalid entry\n");
    printf("The size must be a odd number between 1 "
           "and 99\nEnter size of a magic square: ");
    scanf("%d", &n);
  }

  // initalize array to 0
  int magicsq[n][n];
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      magicsq[i][j] = 0;
    }
  }

  // place number 1 in the middle of row 0
  i = 0;
  j = (n / 2);
  magicsq[i][j] = magicnum;
  oldi = i;
  oldj = j;

  for (magicnum = 2; magicnum <= n * n; magicnum++) {
    // check i and j for out of bounds. else up and over
    if (i == 0) {
      i = n - 1;
    } else {
      --i;
    }
    if (j + 1 == n) {
      j = 0;
    } else {
      j++;
    }
    // check that array element is not occupied
    //  else number goes directly below previously store number.
    if (magicsq[i][j] != 0) {
      i = oldi + 1;
      j = oldj;
    }
    magicsq[i][j] = magicnum;
    oldi = i;
    oldj = j;
  }

  // print out array.
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%5d", magicsq[i][j]);
    }
    printf("\n");
  }
}
