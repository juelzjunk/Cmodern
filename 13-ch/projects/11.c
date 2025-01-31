// Modify proj 13 ch 7 so that it includes the following function:
//      double compute_average_word_length(const char *sentence);
// The function returns the average length of the words in the string pointed to
// by sentence.

// Write a program that calculates the average word length for a sentence:
//
//  Enter a sentence: Its was deja vu all over again.
//  Average word length: 3.4
//
// For simplicity, your program should consider a punctuation mark to be part of
// the word to which it is attached. Display the average word length to one
// decimal place.
#include <stdio.h>
#define N 100
double compute_average_word_length(const char *sentence);

int main() {
  char sentence[N] = "\0";
  double average = 0;
  printf("Enter a sentence: ");
  fgets(sentence, N - 1, stdin);
  average = compute_average_word_length(sentence);
  printf("%.1f\n", average);
  return 0;
}
double compute_average_word_length(const char *sentence) {

  double words = 1, letters = 0;

  printf("Enter a sentence: ");
  while (*sentence++) {
    if (*sentence == '\0')
      break;
    if (*sentence == ' ')
      words++;
    else
      letters++;
  }
  return letters / words;
}
