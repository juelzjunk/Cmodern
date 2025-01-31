// Mod Project 17 from Chapter 8 so that it includes the following functions:
//
// void create_magic_square(int n, char magic_square[n][n]);
// void print_magic_square(int n, char magic_square[n][n]);
//
// After obtaining the number n from the user, main will call
// create_magic_square, passing it an nXn array that is declared inside main.
// create_magic_square will fill the array with the numbers 1,2,...,n^2 as
// described in the original project. main will then call print_magic_square,
// which will display the array in the format described in the original project.
// Note: if your compiler doesnt support variable-length arrays, declare the
// array in main to be 99X99 instead oof nXn and the following prototypes
// instead:
//
// void create_magic_square(int n, char magic_square[99][99]);
// void print_magic_square(int n, char magic_square[99][99]);
#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void) {

  int n = 0;
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
  char magicsq[n][n];
  create_magic_square(n, magicsq);
  print_magic_square(n, magicsq);

  return 0;
}

void create_magic_square(int n, char magic_square[n][n]) {
  // initalize array to 0
  int i = 0, j = 0, oldi = 0, oldj = 0, magicnum = 1;

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      magic_square[i][j] = 0;
    }
  }

  // place number 1 in the middle of row 0
  i = 0;
  j = (n / 2);
  magic_square[i][j] = magicnum;
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
    if (magic_square[i][j] != 0) {
      i = oldi + 1;
      j = oldj;
    }
    magic_square[i][j] = magicnum;
    oldi = i;
    oldj = j;
  }
}

void print_magic_square(int n, char magic_square[n][n]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%5d", magic_square[i][j]);
    }
    printf("\n");
  }
}
