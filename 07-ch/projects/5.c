#include <ctype.h>
#include <stdio.h>

//   1: A E I L N O R S T U
//   2: D G
//   3: B C M P
//   4: F H V W Y
//   5: K
//   8: J X
//   10: Q Z
int main() {
  char ch;
  int score = 0;
  printf("Enter a word: ");

  while ((ch = getchar()) != '\n') {
    ch = toupper(ch);
    if (ch < 'A' || ch > 'Z') {
      continue;
    }
    switch (ch) {
    case 'D':
    case 'G':
      score += 2;
      break;
    case 'B':
    case 'C':
    case 'M':
    case 'P':
      score += 3;
      break;
    case 'F':
    case 'H':
    case 'V':
    case 'W':
    case 'Y':
      score += 4;
      break;
    case 'K':
      score += 5;
      break;
    case 'J':
    case 'X':
      score += 8;
      break;
    case 'Q':
    case 'Z':
      score += 10;
      break;
    default:
      score += 1;
      break;
    }
  }
  printf("Scrabble value: %d\n", score);
}
