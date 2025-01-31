// Revise the program to use pointers instead of integers

#include <ctype.h>
#include <stdio.h>

#define MAX 35

int main(void) {
  char msg[MAX], *iMsg, *jMsg;

  printf("Enter a message: ");
  for (iMsg = msg; *iMsg != '\n' && iMsg < msg + MAX; iMsg++) {
    *iMsg = toupper(getchar());
    if (*iMsg < 'A' || *iMsg > 'Z')
      iMsg--;
  }
  for (iMsg--, jMsg = msg; iMsg >= msg && jMsg < msg + MAX; jMsg++, iMsg--) {
    if (*iMsg != *jMsg) {
      printf("Not a Palindrome\n");
      return 0;
    }
  }
  printf("Palindrome\n");

  return 0;
}
