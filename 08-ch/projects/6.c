// Write a "B1FF filter"
// Enter message: Hey dude, C is rilly cool
// in B1FF-speak: H3Y DUD3, C 15 RiLLy C00L!!!!!!!!!!
//
// toupper
// A=4, B=8, E=3, I=1, O=0, S=5
// append 10 !
//
// store original message in an array of characters
// then go back through the array, translating and printing one by one.
#include <ctype.h>
#include <stdio.h>

int main() {
  char message[100];
  char ch;

  printf("Enter Message: ");

  for (int i = 0; i < sizeof(message); i++) {
    message[i] = ch = getchar();
    if (ch == '\n') {
      break;
    }

    message[i] = toupper(message[i]);

    if (message[i] == 'A') {
      message[i] = '4';
    } else if (message[i] == 'E') {
      message[i] = '3';
    } else if (message[i] == 'B') {
      message[i] = '8';
    } else if (message[i] == 'I') {
      message[i] = '1';
    } else if (message[i] == 'O') {
      message[i] = '0';
    } else if (message[i] == 'S') {
      message[i] = '5';
    }
    printf("%c", message[i]);
  };
  printf("!!!!!!!!!!\n");
}
