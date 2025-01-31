// Simplify Programming Project 1(b) by taking advantage of the fact that an
// array name can be used as a poimter
// i was already doing that

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
