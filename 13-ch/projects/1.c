/*
 * Write a program that finds the "smallest" and "largest" in a series of words.
 * After the user enters the words, the program will determine which words would
 * come first and last if the words were listed in dictionary order. The program
 * must stop accepting input when the user enters a four-letter word. Assume
 * that no word is more than 20 letters long. An interactive session with the
 * program might look like this:
 *
 * Enter a word: dog
 * Enter a word: zebra
 * Enter a word: rabbit
 * Enter a word: catfish
 * Enter a word: walrus
 * Enter a word: cat
 * Enter a word: fish
 *
 * Smallest word: cat
 * Largest word: zebra
 *
 * Hint: Use two strings named smallest_word and largest_word to keep track of
 * the "smallest" and "largest" words entered so far. Each time the user enters
 * a new word, use strcmp to compare it with smallest_word; if the new word is
 * "smaller," use strcpy to save the it in smallest_word. Do a similar
 * comparison with largest_word. Use strlen to determine when the user has
 * entered a four-letter word.
 * */

#include <stdio.h>
#include <string.h>
#define N 20
int main(void) {
  char input_word[N + 1] = "\0", smallest_word[N + 1], largest_word[N + 1];
  printf("Enter a word: ");
  fgets(input_word, N, stdin);
  strncpy(smallest_word, input_word, N);
  strncpy(largest_word, input_word, N);

  // characters over 20 bugs fgets?
  for (;;) {
    printf("Enter a word: ");
    fgets(input_word, N, stdin);
    if (strlen(input_word) == 5) {
      printf("\nSmallest word: %s", smallest_word);
      printf("Largest word: %s", largest_word);
      return 0;
    } else if (strcmp(input_word, smallest_word) < 0)
      strncpy(smallest_word, input_word, N);
    else if (strcmp(input_word, largest_word) > 0)
      strncpy(largest_word, input_word, N);
  }
}
