// Modify project 14 from ch 8 so that it stores the words in a two-dimensional
// char array as it reads the sentence, with each row of the array storing a
// single word. Assume that the sentence contains no more than 30 words and no
// word is more than 20 characters long. Be sure to store a null character at
// the end of each word so that it can be treated as a string.

// Write a program that reverses the words in a sentence:
//
// Enter a sentence: you can cage a swallow can't you?
// Reversal of sentence: you can't swallow a cage can you?
//
// Hint:
// - Use a loop to read the characters one by one and store them in a
// one-dimensional char aray. Have the loop stop at a period, question mark, or
// exclamation point (the "terminating character"), which is saved in a separate
// char variable.
// - Then use a second loop to search backward through the array for the
// beginning of the last word.
// - Print the last word, then search backward for the next-to-last word.
// Repeat until the beginning of the array is reached.
// -Finally, print the terminating character.

#include <stdio.h>

#define MAX_CHAR 20  // max word length
#define MAX_WORDS 30 // max sentence length

int read_matrix(char str[][MAX_CHAR], int max_row, int max_col);

int main(void) {
  int i = 0;
  char sentenceArr[MAX_WORDS][MAX_CHAR] = {"\0"};
  printf("Enter a sentence: ");
  i = read_matrix(sentenceArr, MAX_WORDS, MAX_CHAR);
  printf("Reversal of sentence: ");
  while (i >= 0) {
    printf("%s ", sentenceArr[i--]);
  }
  printf("\n");
}

int read_matrix(char str[][MAX_CHAR], int max_row, int max_col) {
  int ch, row = 0, col = 0, term = 0;

  while (row < max_row) {
    if (ch == '\n')
      break;
    while ((ch = getchar()) != ' ' && ch != '\n') {
      if (ch == '.' || ch == '!' || ch == '?') {
        str[0][term] = ch;
        continue;
      }
      if (col < max_col)
        str[row][col++] = ch;
    }
    if (row == 0)
      term = col;

    str[row++][col] = '\0';
    col = 0;
  }
  return row - 1;
}
