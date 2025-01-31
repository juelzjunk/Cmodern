// Write a function named capitalize that capitalizes all letters in its
// argument. The argument will be a null-terminated string containing arbitrary
// characters, not just letters. Use array subscripting to access the charcters
// in the string. Hint: Use the toupper function to convert each charcter to
// upper-case.

#include <ctype.h>
#include <stdio.h>

#define N 100

void capitalize(char string[]);

int main(void) {

  char string[] = "hello w0rld!";
  puts(string);
  capitalize(string);
  puts(string);
}

void capitalize(char string[]) {
  int i;
  for (i = 0; string[i]; i++)
    string[i] = toupper(string[i]);
}
