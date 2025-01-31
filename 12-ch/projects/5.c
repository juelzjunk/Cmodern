// Modify Project 14 Chapter 8 so that it uses a pointer instead of an integer
//
//  Write a program that reverses the words in a sentence:
//  Enter a sentence: you can cage a swallow can't you?
//  Reversal of sentence: you can't swallow a cage can you?
//
//  Hint:
//  - Use a loop to read the characters one by one and store them in a
//  one-dimensional char aray. Have the loop stop at a period, question mark, or
//  exclamation point (the "terminating character"), which is saved in a
//  separate char variable.
//  - Then use a second loop to search backward through the array for the
//  beginning of the last word.
//  - Print the last word, then search backward for the next-to-last word.
//  Repeat until the beginning of the array is reached.
//  -Finally, print the terminating character.
#include <stdio.h>
#define MAX 100

int main(void) {
  char terminator = 0, sentence[MAX] = {' '}, *pSentence, *pReversal, *pWordEnd;

  // first char of array is ' ' so program executes properly
  // there is probably a better way to do this.

  printf("Enter a sentence: ");
  // store sentence in array and assign terminating character
  for (pSentence = sentence + 1;
       ((*pSentence = getchar()) != '\n') && pSentence < sentence + MAX;
       pSentence++) {
    if (*pSentence == '.' || *pSentence == '!' || *pSentence == '?') {
      terminator = *pSentence;
      pSentence--;
    }
  }

  // search backwards
  printf("Reversal of sentence:");
  // --pSentence to step back from spaces and new line character
  while (--pSentence >= sentence) {
    pWordEnd = pSentence; // keep place of where word began
    while (*pSentence != ' ') {
      pSentence--; // search backwards for full word
    }
    for (pReversal = pSentence; pReversal <= pWordEnd; pReversal++)
      printf("%c", *pReversal); // print word
  }
  printf("%c\n", terminator);
}
