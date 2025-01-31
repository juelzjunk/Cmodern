// Modify proj 11 ch 7 so that it includes the following function:
//      void reverse_name(char *name);
// The function expects name to point to a string containing a first name
// followed by a last name. It modifies the string so that the last name comes
// first, followed by a comma, a space, the first initial, and a period. The
// original string may contain extra spaces before the first name, between the
// first and last names, and after the last name.

// a program that takes a first and last name
// then displays last name, a comma, and first initial,
// followed by period:
//      Enter a first and last name: Lloyd Fosdick
//      Fosdick, L.
#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define N 20
void reverse_name(char *name);

int main() {
  char first[N / 2], last[N / 2], name[N];
  // store "first last" in name
  printf("Enter a first and last name: ");
  scanf("%s", first);
  scanf("%s", last);
  // make sure first letter is capitalized
  *first = toupper(*first);
  *last = toupper(*last);
  //  copy first and last into name string
  strncpy(name, strcat(strcat(first, " "), last), N);

  reverse_name(name);
  printf("%s\n", name);
}
// I DID IT! BUT ITS UGLY AF!!!
void reverse_name(char *name) {
  int i = 0;
  char firstInt[2] = "\0";

  strncpy(firstInt, &name[0], 1); // find first inital
  while (name[i++] != ' ')        // find last name
    ;
  strncpy(name, strcat(&name[i], ", "), N); // Fosdick,
  strcat(name, strcat(firstInt, "."));      // L.
}
