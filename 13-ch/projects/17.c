// Modify project 2 chapter 12 so that it includes the following functions:
//  bool is_palindrome(const char *message)
//  The function returns true if the string pointed to by message is a
//  palindrome.
// Enter a message: He lived as a devil, eh?
// Palindrome
//
// Enter a message: Madam, I am Adam.
// Not a palindrome
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX 35

bool is_palindrome(const char *message);

int main(void) {

  // char msg[MAX] = {"he lived as a devil eh\n\0"};
  char msg1[MAX] = {"He lived as a devil, eh?\n\0"};
  // char msg2[MAX] = {"madam i am adam\n\0"};
  char msg2[MAX] = {"Madam I am Adam.\n\0"};
  // printf("Enter a message: ");
  // fgets(msg, MAX, stdin);

  if (is_palindrome(msg1))
    printf("msg1: Palindrome\n");
  else
    printf("msg1: Not a Palindrome\n");

  if (is_palindrome(msg2))
    printf("msg2: Palindrome\n");
  else
    printf("msg2: Not a Palindrome\n");
}
bool is_palindrome(const char *message) {
  char Msg[MAX], *iMsg, *jMsg;
  int i, j;

  for (i = 0, j = 0; message[i] != '\0'; i++)
    if (isalpha(message[i]))
      Msg[j++] = toupper(message[i]);

  for (iMsg = Msg, jMsg = &Msg[--j]; iMsg <= &Msg[--j] && jMsg >= Msg;
       iMsg++, jMsg--)
    if (*iMsg != *jMsg)
      return false;

  return true;
}
