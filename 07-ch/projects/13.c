// Write a program that calculates the average word length for a sentence:
//
//  Enter a sentence: Its was deja vu all over again.
//  Average word length: 3.4
//
// For simplicity, your program should consider a punctuation mark to be part of
// the word to which it is attached. Display the average word length to one
// decimal place.
#include <stdio.h>

int main() {
  char ch, c;
  double average = 0, words = 1, letters = 0;

  printf("Enter a sentence: ");
  while ((ch = getchar()) != '\n') {
    if (ch == ' ') {
      words++;
    } else
      letters++;
  }
  printf("%.1f\n", letters / words);
}
