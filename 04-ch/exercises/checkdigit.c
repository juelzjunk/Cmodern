// Compute the check digit of 0 51500 24128
//                            0 31200 01005
#include <stdio.h>

int main() {
  // int a, b, c, d, e, f, g, h, i, j, k;
  //  int a = 0;
  // int b = 5;
  // int c = 1;
  // int d = 5;
  // int e = 0;
  // int f = 0;
  // int g = 2;
  // int h = 4;
  // int i = 1;
  // int j = 2;
  // int k = 8;
  //
  int a = 0;
  int b = 3;
  int c = 1;
  int d = 2;
  int e = 0;
  int f = 0;
  int g = 0;
  int h = 1;
  int i = 0;
  int j = 0;
  int k = 5;

  // add the first, third, fifth, seventh, ninth, and eleventh digits.
  // add the second, fourth, sixth, eight, and tenth digit.
  int sum1 = (a + c + e + g + i + k);
  int sum2 = (b + d + f + h + j);
  // multiply first sum by 3
  // add it to second sum
  // subtract 1 from total
  int adjusted_total = ((sum1 * 3) + sum2) - (1);
  // compute the remainder when
  // adjusted_total / 10
  // subtract remainder from 9
  int remainder = adjusted_total % 10;

  int check_digit = 9 - remainder;

  printf("%d\n", check_digit);
  // answer = 8
}
