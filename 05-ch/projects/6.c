// Modify upc.c so that it checks whether a UPC is valid.
// After the user enters UPC, the program will display either VALID or NOT VALID
#include <stdio.h>

int main() {
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total,
      check_digit;
  printf("Enter the 12 digit UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1,
        &j2, &j3, &j4, &j5, &check_digit);

  first_sum = d + i2 + i4 + j1 + j3 + j5;
  second_sum = i1 + i3 + i5 + j2 + j4;
  total = 3 * first_sum + second_sum;

  if (check_digit = 9 - ((total - 1) % 10)) {
    printf("UPC: VALID\n");
  } else {
    printf("UPC: NOT VALID\n");
  }

  printf("Check digit: %d\n", (10 - (total % 10)) % 10);
  return 0;
}
