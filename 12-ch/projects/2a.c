// Write a program that reads a message, then checks whether its a palindrome:
//
// Enter a message: He lived as a devil, eh?
// Palindrome
//
// Enter a message: Madam, I am Adam.
// Not a palindrome
//
// Ignore all characters that arent letters. Use integer variable to keep track
// of positions in the array
#include <ctype.h>
#include <stdio.h>

#define MAX 35

int main(void) {
  char msg[MAX];
  int i, j;

  printf("Enter a message: ");
  for (i = 0; msg[i] != '\n' && i < MAX; i++) {
    msg[i] = toupper(getchar());
    if (msg[i] < 'A' || msg[i] > 'Z')
      i--;
  }
  for (i--, j = 0; i >= 0 && j < MAX; j++, i--) {
    if (msg[i] != msg[j]) {
      printf("Not a Palindrome\n");
      return 0;
    }
  }
  printf("Palindrome\n");

  return 0;
}
