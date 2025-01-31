/*
 * Write a program that prompts the user for a number and then displays the
 * number, using characters to simulate the effect of a seven-segment display:
 *
 * Enter a number: 491-9014
 *      _      _   _
 * |_| |_|  | |_| | |  |  |_|
 *   |  _|  |  _| |_|  |    |
 *
 */

#include <stdio.h>

#define MAX_DIGITS 10 // extra digits are ignored

// external arrays
const int segments[10][7] = {
    {1, 1, 1, 1, 1, 1, 0}, // 0
    {0, 1, 1, 0, 0, 0, 0}, // 1
    {1, 1, 0, 1, 1, 0, 1}, // 2
    {1, 1, 1, 1, 0, 0, 1}, // 3
    {0, 1, 1, 0, 0, 1, 1}, // 4
    {1, 0, 1, 1, 0, 1, 1}, // 5
    {1, 0, 1, 1, 1, 1, 1}, // 6
    {1, 1, 1, 0, 0, 0, 0}, // 7
    {1, 1, 1, 1, 1, 1, 1}, // 8
    {1, 1, 1, 1, 0, 1, 1}, // 9
};

char digits[3][MAX_DIGITS * 4];
/*
 * ... ._. ... ... ... ... ... ... ... ...
 * ... |_| ... ... ... ... ... ... ... ...
 * ... |_| ... ... ... ... ... ... ... ...
 */
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void) {
  int d = 0, i = 0;
  clear_digits_array();
  printf("Enter a number: ");
  for (i = 0; (d = getchar()) != '\n' && i < MAX_DIGITS; i++) {
    d = d - '0';
    if (d <= 9 && d >= 0)
      process_digit(d, i);
    else
      i--;
  }
  print_digits_array();
}

void clear_digits_array(void) {
  // store blank characters into all elements of digits array
  int i, j;
  for (i = 0; i < 4; i++)
    for (j = 0; j <= MAX_DIGITS * 4; j++)
      digits[i][j] = ' ';
}
void process_digit(int digit, int position) {
  // will store the seven-segment representation of digit
  // into a specified position in the digits array
  // postions range from 0 to MAX_DIGITS -1
  // every fourth position should be a space?
  int i = 0, p = position * 4;
  for (i = 0; i <= 7; i++) {
    if (segments[digit][i]) {
      switch (i) {
      case 0:
        digits[0][p + 1] = '_';
        break;
      case 1:
        digits[1][p + 2] = '|';
        break;
      case 2:
        digits[2][p + 2] = '|';
        break;
      case 3:
        digits[2][p + 1] = '_';
        break;
      case 4:
        digits[2][p] = '|';
        break;
      case 5:
        digits[1][p] = '|';
        break;
      case 6:
        digits[1][p + 1] = '_';
        break;
      default:
        break;
      }
    }
  }
}
void print_digits_array(void) {
  // will display the rows of the digits array
  // each on a single line
  int i, j;
  for (i = 0; i < 4; i++) {
    for (j = 0; j < MAX_DIGITS * 4; j++) {
      printf("%c", digits[i][j]);
    }
    printf("\n");
  }
}
