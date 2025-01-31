// Modify Proj 5 for Ch 7 so that it includes the following function:
//      int compute_scrabble_value(const char *word);
// The function returns the SCRABBLE value of the string pointed to by word.

//   1: A E I L N O R S T U
//   2: D G
//   3: B C M P
//   4: F H V W Y
//   5: K
//   8: J X
//   10: Q Z
#include <ctype.h>
#include <stdio.h>

#define N 20

int compute_scrabble_value(const char *word);

int main() {
  char word[N];
  int score = 0;
  printf("Enter a word: ");
  // fgets(word, N, stdin);
  scanf("%s", word);
  score = compute_scrabble_value(word);
  printf("Scrabble value: %d\n", score);
}

int compute_scrabble_value(const char *word) {
  int score = 0;
  for (; *word; word++) {
    switch (toupper(*word)) {
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
  return score;
}
