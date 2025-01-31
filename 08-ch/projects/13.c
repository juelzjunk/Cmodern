
// a program that takes a first and last name
// then displays last name, a comma, and first initial,
// followed by period:
//      Enter a first and last name: Lloyd Fosdick
//      Fosdick, L.
// The program will need to store the last name (but not the first name)
// in an array of characters until it can be printed.
// You may assume that the last name is no more than 20 characters long.
#include <stdio.h>
#define MAX_name_len 20

int main() {
  char first_int = 0, ch = 0, last_name = 0, array[MAX_name_len] = {0};
  int i = 0, j = 0;

  printf("Enter a first and last name: ");

  // get first initial
  scanf(" %c", &first_int);
  // // finish out string
  do {
    ch = getchar();
  } while (ch != ' ');
  // store last name in array
  while ((last_name = getchar()) != '\n') {
    array[i] = last_name;
    i++;
  }

  printf("You entered the name: ");
  // print out lastname, first initial.
  do {
    printf("%c", array[j]);
    j++;
  } while (j < i);
  printf(", %c.\n", first_int);
}
