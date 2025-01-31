#include <stdio.h>
int main() {

  int a[5][5] = {0}, row = 0, column = 0;

  for (row = 0; row < 5; row++) {
    printf("Enter row %d: ", row + 1);
    for (column = 0; column < 5; column++) {
      scanf(" %d", &a[row][column]);
    }
  }
  // array is stored 5x5
  // now calculate Row sums and Column sums

  // int a[5][5] = {{8, 3, 9, 0, 10},
  //                {3, 5, 17, 1, 1},
  //                {2, 8, 6, 23, 1},
  //                {15, 7, 3, 2, 9},
  //                {6, 14, 2, 6, 0}};
  //
  int rowsum[5] = {0}, colsum[5] = {0};
  printf("Row totals: ");
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      rowsum[i] += a[i][j];
    }
    printf("%d ", rowsum[i]);
  }
  printf("\n");

  printf("Column totals: ");
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      colsum[i] += a[j][i];
    }
    printf("%d ", colsum[i]);
  }
  printf("\n");
}
