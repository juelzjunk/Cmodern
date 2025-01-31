#include <stdio.h>

int main() {
  char ch;
  printf("Enter phone number: ");
  while ((ch = getchar()) != '\n') {

    switch (ch) {
    case 'A':
    case 'B':
    case 'C':
      putchar('2');
      break;
    case 'D':
    case 'E':
    case 'F':
      putchar('3');
      break;
    case 'G':
    case 'H':
    case 'I':
      putchar('4');
      break;
    case 'J':
    case 'K':
    case 'L':
      putchar('5');
      break;
    case 'M':
    case 'N':
    case 'O':
      putchar('6');
      break;
    case 'P':
    case 'R':
    case 'S':
      putchar('7');
      break;
    case 'T':
    case 'U':
    case 'V':
      putchar('8');
      break;
    case 'W':
    case 'X':
    case 'Y':
      putchar('9');
      break;
    default:
      putchar(ch);
      break;
    }
  }
  printf("\n");
}
// do {
// ch = getchar();
// if (ch >= 65 && ch <= 67) {
//   putchar('2');
// } else if (ch >= 68 && ch <= 70) {
//   putchar('3');
// } else if (ch >= 71 && ch <= 73) {
//   putchar('4');
// } else if (ch >= 74 && ch <= 76) {
//   putchar('5');
// } else if (ch >= 77 && ch <= 79) {
//   putchar('6');
// } else if (ch >= 80 && ch <= 83) {
//   putchar('7');
// } else if (ch >= 84 && ch <= 86) {
//   putchar('8');
// } else if (ch >= 87 && ch <= 89) {
//   putchar('9');
// } else {
//   putchar(ch);
// }
// // } while (ch != '\n');
