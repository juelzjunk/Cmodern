// Modify Project 16 chapter 8 so that it includes the following function:
//  bool are_anagrams(const char *word1, const char *word2);
// The function returns true if the strings pointed to by word1 and word2 are
// are_anagrams.

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_WORD_LENGTH 15

bool are_anagrams(const char *word1, const char *word2);
int main(void) {

  char word1[MAX_WORD_LENGTH], word2[MAX_WORD_LENGTH];

  printf("Enter first word: ");
  fgets(word1, MAX_WORD_LENGTH, stdin);
  printf("Enter second word: ");
  fgets(word2, MAX_WORD_LENGTH, stdin);
  if (are_anagrams(word1, word2))
    printf("anagrams\n");
  else
    printf("not anagrams\n");
}
bool are_anagrams(const char *word1, const char *word2) {
  int alphabet[26] = {0};
  for (; *word1; word1++)
    alphabet[(tolower(*word1) - 'a')] += 1;
  for (; *word2; word2++)
    alphabet[(tolower(*word2) - 'a')] -= 1;
  for (int i = 0; i < 26; i++)
    if (alphabet[i] != 0) {
      return false;
    }
  return true;
}
