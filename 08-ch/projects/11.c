// Enter phone number: 1-800-COL-LECT
// In numeric form: 1-800-265-5328
#include <ctype.h>
#include <stdio.h>

#define MAX 15

int main() {

  char ch;
  int i = 0, user_input[MAX] = {0};

  printf("Enter phone number: ");
  for (ch = getchar(), i = 0; i < MAX && ch != '\n'; i++) {
    switch (toupper(ch)) {
    case 'A':
    case 'B':
    case 'C':
      user_input[i] = 2;
      break;
    case 'D':
    case 'E':
    case 'F':
      user_input[i] = 3;
      break;
    case 'G':
    case 'H':
    case 'I':
      user_input[i] = 4;
      break;
    case 'J':
    case 'K':
    case 'L':
      user_input[i] = 5;
      break;
    case 'M':
    case 'N':
    case 'O':
      user_input[i] = 6;
      break;
    case 'P':
    case 'R':
    case 'S':
      user_input[i] = 7;
      break;
    case 'T':
    case 'U':
    case 'V':
      user_input[i] = 8;
      break;
    case 'W':
    case 'X':
    case 'Y':
      user_input[i] = 9;
      break;
    case '-':
      user_input[i] = ch;
      break;
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      user_input[i] = ch - '0';
      break;
    default:
      printf("ERROR: %c is not a valid entry\n", ch);
      i--;
      break;
    }
    ch = getchar();
  }

  printf("In numeric form: ");
  for (int j = 0; j < i; j++) {
    if (user_input[j] == '-') {
      printf("%c", user_input[j]);
    } else
      printf("%d", user_input[j]);
  }
  printf("\n");
}
