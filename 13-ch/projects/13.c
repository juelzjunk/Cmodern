// Modify Programming Project 15 from Chapter 8 so that it includes the
// following function:
//      void encrypt(char *message, int shift);
// The function expects message to point to a string containing the message to
// be encrypted; shift represents the amount by which each letter in the
// message is to be shifted.
#include <stdio.h>
#include <stdlib.h>

#define maxInput 80

void encrypt(char *message, int shift);

int main(void) {
  char message[maxInput] = {"\0"};
  int shift = 0;

  printf("Enter message to be encrypted: ");
  fgets(message, maxInput - 1, stdin);
  printf("%s", message);
  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift);
  encrypt(message, shift);

  return EXIT_SUCCESS;
}
// hint from ch8 proj 15
// ((ch - 'A') + n) % 26 + 'A'
void encrypt(char *message, int shift) {
  for (; *message; message++) {
    if (*message <= 'z' && *message >= 'a')
      printf("%c", ((*message - 'a') + shift) % 26 + 'a');
    else if (*message <= 'Z' && *message >= 'A')
      printf("%c", ((*message - 'A') + shift) % 26 + 'A');
    else
      printf("%c", *message);
  }
}
// Enter message to be encrypted: Go ahead, make my day.
// Enter shift amount (1-25): 3
// Encrypted message: Jr dkhdg, pdnh pb gdb.
