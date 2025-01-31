#include <stdio.h>

int array_strcmp(char *s, char *t) {
  int i;

  for (i = 0; s[i] == t[i]; i++)
    if (s[i] == '\0')
      return 0;
  return s[i] - t[i];
}
int pointer_strcmp(char *s, char *t) {
  char *pS = s, *pT = t;

  while (*pS == *pT) {
    if (*pS == '\0')
      return 0;
    pS++;
    pT++;
  }
  return *pS - *pT;
}

int main(void) {
  char s[] = "hello World";
  char t[] = "hello worl";
  printf("%d\n", array_strcmp(s, t));
  printf("%d\n", pointer_strcmp(s, t));
}
