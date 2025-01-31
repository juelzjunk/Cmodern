// Modify proj 10 from ch 7 so that it includes the following function:
//      int compute_vowel_count(const char *sentence);
// The function returns the number of vowels in the string pointed to by the
// sentence parameter.

// program that counts the number of vowels in a phrase
//
// Enter a sentence: And that's the way it is.
// Your sentence contains 6 vowels.

#include <ctype.h>
#include <stdio.h>

#define N 100

int compute_vowel_count(const char *sentence);
int main() {
  int vowels = 0;
  char sentence[N];
  printf("Enter a sentence: ");
  fgets(sentence, N, stdin);
  vowels = compute_vowel_count(sentence);
  printf("Your sentence contains %d vowels\n", vowels);
}
int compute_vowel_count(const char *sentence) {
  int vowels = 0;
  for (; *sentence; sentence++) {
    switch (tolower(*sentence)) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      vowels++;
      break;
    }
  }
  return vowels;
}
