// Write a declaration of an array named weekend containing seven bool values.
// Include an initializer that makes the first and last values true; all other
// values should be false.
#include <stdbool.h>
#include <stdio.h>

int main() {

  bool weekend[7] = {[0] = true, [6] = true};

  for (int i = 0; i <= 6; i++)
    printf("%d\n", weekend[i]);
}
