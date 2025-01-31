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
#define MAX 100

int main() {
  char ch1 = 0, ch2 = 0, terminator = 0, sentence[MAX] = {0};
  int i = 0, j = 0, k = 0, l = 0;

  printf("Enter a sentence: ");
  // store sentence in array and assign terminating character
  for (i = 0, ch1 = getchar(); i < MAX && ch1 != '\n'; i++) {
    if (ch1 == '.' || ch1 == '!' || ch1 == '?') {
      terminator = ch1;
      break;
    } else {
      sentence[i] = ch1;
    }
    ch1 = getchar();
  }
  // search backwards
  printf("Reversal of sentence: ");
  while (i > 0) {
    while (sentence[--i] != ' ' && i != 0)
      ;
    j = i == 0 ? 0 : i + 1;
    while (sentence[j] != ' ' && sentence[j] != 0)
      putchar(sentence[j++]);
    if (i > 0) {
      putchar(' ');
    }
  }
  printf("%c\n", terminator);
}
