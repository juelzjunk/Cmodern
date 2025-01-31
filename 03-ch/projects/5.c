// Write a program that asks the user to enter
// numbers from 1 to 16 (in any order) and then
// display the numbers in a 4 by 4 arrangement,
// followed by the sums of the rows, columnsm,
// and diagonals:
//
// Enter the numbers from 1 to 16 in any order:
// 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
//
#include <stdio.h>

int main() {
  int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
  //
  // a = 16;
  // b = 3;
  // c = 2;
  // d = 13;
  // e = 5;
  // f = 10;
  // g = 11;
  // h = 8;
  // i = 9;
  // j = 6;
  // k = 7;
  // l = 12;
  // m = 4;
  // n = 15;
  // o = 14;
  // p = 1;
  printf("Enter the numbers from 1 to 16 in any order: ");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e,
        &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);

  printf("%.2d %.2d %.2d %.2d\n%.2d %.2d %.2d %.2d\n%.2d %.2d %.2d %.2d\n%.2d "
         "%.2d %.2d %.2d\n",
         a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);

  int row_sum1, row_sum2, row_sum3, row_sum4;
  row_sum1 = a + b + c + d;
  row_sum2 = e + f + g + h;
  row_sum3 = i + j + k + l;
  row_sum4 = m + n + o + p;
  printf("Row sums: %d %d %d %d\n", row_sum1, row_sum2, row_sum3, row_sum4);

  int cc1, cc2, cc3, cc4;
  cc1 = a + e + i + m;
  cc2 = b + f + j + n;
  cc3 = c + g + k + o;
  cc4 = d + h + l + p;
  printf("Column sums: %d %d %d %d\n", cc1, cc2, cc3, cc4);
  int d1, d2;
  d1 = a + f + k + p;
  d2 = m + j + g + d;
  printf("Diagonal sums: %d %d\n", d1, d2);
}
