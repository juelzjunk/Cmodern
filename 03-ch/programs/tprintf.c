// printf samples
// Prints int and float values in various formats.
#include <stdio.h>

int main() {
  int i;
  float x;

  i = 11;
  x = 1111.11f;

  printf("|%d|\n|%5d|\n|%-5d|\n|%5.3d|\n", i, i, i, i);
  printf("|%10.3f|\n|%10.3e|\n|%-10g|\n|%10g|\n\n", x, x, x, x);
  //////////////
  printf("Item\tUnit\tPurchase\n\tPrice\tDate\n\n\n");
  //////////////
  printf("\"HELLO!\"\\n\\b\\t\\a\n\n");
  //////////////////
  printf("\\\n");
  printf("\\\\\n");
  printf("\\\t\\t\t\\\n");
  printf("jaja\n");
  /////////////////
  // print % with %d%%\n
  int profit = 10;
  printf("Net profit: %d%%\n", profit);
  return 0;
}
