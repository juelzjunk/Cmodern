// Write a program that tests whether two words are anagrams:
//
//  Enter first word: smartest
//  Enter second word: mattress
//  The words are anagrams.
//
//  Enter first word: dumbest
//  Enter second word: stumble
//  The words are not anagrams.
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

int main() {

  char ch = 0;
  int i = 0, alphabet[26] = {0};
  bool anagram = false;

  printf("Enter first word: ");

  while ((ch = getchar()) != '\n') {
    if (!isalpha(ch)) {
      printf("Only letters please. Try again\n");
      return 1;
    }
    ch = tolower(ch);
    alphabet[(ch - 'a')] += 1;
  }

  printf("Enter second word: ");
  while ((ch = getchar()) != '\n') {
    if (!isalpha(ch)) {
      printf("Only letters please. Try again\n");
      return 1;
    }
    ch = tolower(ch);
    alphabet[(ch - 'a')] -= 1;
  }
  for (i = 0; i < 26; i++) {
    if (alphabet[i] != 0) {
      anagram = true;
      break;
    }
  }
  if (anagram) {
    printf("The words are not anagrams.\n");
  } else {
    printf("The words are anagrams.\n");
  }
}
