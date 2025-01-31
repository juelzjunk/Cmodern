// Write a program named refverse.c that echoes its command-line arguments in
// reverse order. Running the program by typing
//      reverse void and null
// should produce the following output:
//      null and void

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i;
  char **p;

  for (i = argc - 1; i > 0; i--) {
    printf("%s ", argv[i]);
  }
  printf("\n");

  for (p = &argv[argc - 1]; p > &argv[0]; p--) {
    printf("%s ", *p);
  }
  printf("\n");
  return EXIT_SUCCESS;
}
