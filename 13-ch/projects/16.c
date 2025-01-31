// Modify project 1 chapter 12 so that it includes the following function:
//  void reverse(char *message);
// The function reverses the string pointed to by message.
// Hint: Use two pointers, one initially pointing to the first character of the
// string and the other initially pointing to the last character. Have the
// function reverese these characters and then move the pointers toward each
// other, repeating the process until the pointers meet.

// Enter a message: Dont't get mad, get even.
// Reversal is: .neve teg ,dam teg t'noD

#include <stdio.h>
#include <string.h>

#define MAX 30

void reverse(char *message);

int main(void) {
  char message[MAX] = {0};
  printf("Enter a message: ");
  fgets(message, MAX, stdin);
  reverse(message);
  printf("%s", message);
}

void reverse(char *message) {
  char *p1, *p2, tmp;
  for (p1 = message, p2 = &message[strlen(message) - 2]; p2 >= p1; p2--, p1++) {
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
  }
}
