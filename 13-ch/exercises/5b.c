// Rewrite the capitalize function, this time using pointer arithmetic to access
// the characters in the string.

#include <ctype.h>
#include <stdio.h>

#define N 100

void capitalize(char *string);

int main(void) {

  char string[N] = " h3llo w0rld!";
  puts(string);
  capitalize(string);
  puts(string);
}

void capitalize(char *string) {
  do {
    *string = toupper(*string);
  } while (*string++);
}
