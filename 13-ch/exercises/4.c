/*
 * Modify the read_line function in each of the following ways:
 *   (a) Have it skip white space before beginning to store input characters.
 *   (b) Have it stop reading at the first white-space character.
 *   Hint: to determine whether or not a character is white space, call isspace
 * function. (c) Have it stop reading at the first new-line character, then
 * store the new-line in the string. (d) Have it leave behind characters that it
 * doesn't have room to store.
 */
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define N 10

int read_line(char str[], int n);

int main(int argc, char *argv[]) {

  char str[N + 1];
  int i = 0;
  printf("Enter a string: ");

  i = read_line(str, N);

  for (int j = 0; j <= i; j++)
    printf("%c", str[j]);

  return EXIT_SUCCESS;
}

int read_line(char str[], int n) {
  int ch, i = 0;

  while ((ch = getchar()) && isspace(ch))
    ; /*IGNORE*/

  for (str[i++] = ch; i < n - 1 && (ch = getchar()) != '\n' && !isspace(ch);
       str[i++] = ch)
    ; /*store characters up to first white space*/

  str[i++] = '\0';
  str[i] = '\n';
  /*store new line char*/
  return i;
}
