#include <stdio.h>
int main() {
  int amountofdays, startingday;

  printf("Enter number of days in month: ");
  scanf("%d", &amountofdays);

  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &startingday);
  // // print number of days in calendar format

  int space = startingday;

  while (space > 1) {
    printf("   ");
    space--;
  }

  for (int i = 1; i <= amountofdays; printf("%2d ", i), i++, startingday++) {

    // if statement tests whether i is last day of week
    // if so, it prints a new line
    if (startingday > 7) {
      printf("\n");
      startingday = 1;
    }
  }
  printf("\n");
}
