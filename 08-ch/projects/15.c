// Ceasar cipher
//
// Enter message to be encrypted: Go ahead, make my day.
// Enter shift amount (1-25): 3
// Encrypted message: Jr dkhdg, pdnh pb gdb.
#include <stdio.h>

#define maxInput 80

int main() {
  int i = 0, j = 0, shiftamount = 0;
  char ch = 0, message[maxInput] = {0};

  printf("Enter message to be encrypted: ");
  for (i = 0, ch = getchar(); ch != '\n' && i < maxInput; i++) {
    message[i] = ch;
    ch = getchar();
  }
  printf("Enter shift amount (1-25): ");
  scanf("%d", &shiftamount);

  printf("Encrypted message: ");
  for (j = 0; j < i; j++) {
    if (message[j] <= 90 && message[j] >= 65) {
      message[j] =
          ((message[j] - 'A') + shiftamount) % 26 + 'A'; // code given in hint
    }
    if (message[j] <= 122 && message[j] >= 97) {
      message[j] =
          ((message[j] - 'a') + shiftamount) % 26 + 'a'; // code given in hint
    }
    printf("%c", message[j]);
  }
  printf("\n");
}
