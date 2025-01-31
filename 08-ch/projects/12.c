// Modify Ch7 proj 5 so that the SCRABBLE values of the letters are stored in an
// array. The array wile have 26 elements, corresponding to 26 letters of
// alphabet. For example: element0 of the array will store 1 (value of letter A
// is 1 in scrabble).
//              element1 of the array will store 3 (value of B).
//              and so forth.
// As each character of the input word is read, the program will use the array
// to determine the SCRABBLE value of that character. Use an array initializer
// to set up the array.
//
// :1 AEILNORSTU, :2 DG, :3 BCMP, :4 FHVWY, :5 K, 8: JX, 10: QZ.
#include <ctype.h>
#include <stdio.h>
#define N 26

int main() {
  const int letter[N] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                         1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
  char ch;
  int score = 0, i = 0;
  printf("Enter a word: ");
  while ((ch = getchar()) != '\n') {
    ch = toupper(ch);
    if (ch < 'A' || ch > 'Z') {
      printf("%c is an invalid entry and was ignored!\n", ch);
      break;
    }
    score += letter[ch - 'A'];
  }
  printf("Scrabble value: %d\n", score);
}
