// a program that takes a first and last name
// then displays last name, a comma, and first initial,
// followed by period:
//      Enter a first and last name: Lloyd Fosdick
//      Fosdick, L.
#include <stdio.h>

int main() {
  char first_int, ch, last_name;

  printf("Enter a first and last name: ");
  // get first initial
  scanf(" %c", &first_int);
  // finish out string
  do {
    ch = getchar();
  } while (ch != ' ');
  // print out last name

  while ((last_name = getchar()) != '\n')
    putchar(last_name);
  // finish format
  printf(", %c.\n", first_int);
}
