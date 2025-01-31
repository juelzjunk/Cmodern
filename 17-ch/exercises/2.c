// Write a function named duplicate that uses dynamic storage allocation to
// create a copy of a string. For example, the call
//      p = duplicate(str);
// would allocate space for a string of the same length as str, copy the
// contents of str into the new string, and return a pointer to it. Have
// duplicate return a null pointer if the memory allocation fails.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(const char *str) {
  char *p;
  p = malloc(strlen(str) + 1);
  if (p == NULL) {
    printf("error malloc failed");
    return NULL;
  }
  // strcpy(p, str);
  strncpy(p, str, strlen(str) + 1);
  return p;
}

int main(void) {
  char *str = {"Hello World\0"};
  char *dupestr;
  dupestr = duplicate(str);
  printf("%s\n", dupestr);
}
