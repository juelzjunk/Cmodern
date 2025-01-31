// Write a function named censor that modifies a string by replacing every
// occurrence of foo by xxx. For example, the string "food fool" would become
// "xxxd xxxl". Make the function as short as possible without sacrificing
// clarity.
#include <stdio.h>

void censor(char *string);

int main(void) {
  char string[] = "food fool";

  puts(string);
  censor(string);
  puts(string);

  return 0;
}
void censor(char *string) {
  for (int i = 0; string[i]; i++) {
    if (string[i] == 'f' && string[i + 1] == 'o' && string[i + 2] == 'o') {
      string[i] = string[i + 1] = string[i + 2] = 'x';
    }
  }
}
