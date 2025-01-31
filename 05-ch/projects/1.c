// Write a program that calculates how many digits a number contains:
//      Enter a number: 374
//      The number 374 has 3 digits
#include <stdio.h>

int main(void) {
  int i;
  printf("Enter a number: ");
  scanf("%d", &i);
  if (i <= 9)
    printf("The number %d has 1 digit\n", i);
  else if (i <= 99)
    printf("The number %d has 2 digits\n", i);
  else if (i <= 999)
    printf("The number %d has 3 digits\n", i);
  else if (i <= 9999)
    printf("The number %d has 4 digits\n", i);
  else
    printf("I cant count that high\n");
  return 0;
}
