// (a) Write a program that reads a message, then prints the reversal of the
//
// message:
//
// Enter a message: Dont't get mad, get even.
// Reversal is: .neve teg ,dam teg t'noD
//
// Hint: Read the message one character at a time (using getchar) and store the
// characters in an array. Stop reading when the array is full or the character
// read is '\n'.
//
// (b) Revise the program to use a pointer instead of an integer to keep track
// of the current position in the array.

#include <stdio.h>

#define MAX 30

int main(void) {
  char message[MAX] = {0};
  char *pMsg;
  printf("Enter a message: ");
  for (pMsg = message; ((*pMsg = getchar()) != '\n') && pMsg <= message + MAX;
       pMsg++)
    ;
  printf("Reversal is: ");
  for (pMsg--; pMsg >= message; pMsg--) {
    printf("%c", *pMsg);
  }
  printf("\n");
}
