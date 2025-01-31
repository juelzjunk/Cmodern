#include <stdio.h>

int main() {
  int isbn, gs1, grpid, pubcode, itemnum, check_digit;
  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &gs1, &grpid, &pubcode, &itemnum, &check_digit);
  printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem "
         "number: %d\nCheck digit: %d\n",
         gs1, grpid, pubcode, itemnum, check_digit);
}
