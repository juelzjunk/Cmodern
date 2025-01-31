#include <stdio.h>
#include <stdlib.h>

#define N 100

int read_line(char str[], int n);

int main(int argc, char *argv[]) {

  char str[N + 1];
  int i = 0;
  printf("Enter a string: ");
  i = read_line(str, N);
  for (int j = 0; j <= i; j++)
    printf("%c", str[j]);
  printf("\n");
  return EXIT_SUCCESS;
}

int read_line(char str[], int n) {
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}
