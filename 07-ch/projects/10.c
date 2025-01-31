// program that counts the number of vowels in a phrase
//
// Enter a sentence: And that's the way it is.
// Your sentence contains 6 vowels.
#include <ctype.h>
#include <stdio.h>

int main() {
  int vowels = 0;
  char ch;

  printf("Enter a sentence: ");

  while ((ch = getchar()) != '\n') {
    ch = tolower(ch);
    // while ((ch = getchar()) == ' ')
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      vowels++;
  }

  printf("Your sentence contains %d vowels\n", vowels);
}
