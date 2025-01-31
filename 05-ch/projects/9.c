// Write a program that prompts the user to enter two
// dates and then indicates which date  comes earlier on the calendar:
//  Enter first date (mm/dd/yy): 3/6/08
//  Enter second date (mm/dd/yy): 5/17/07
//  5/17/07 is earlier than 3/6/08
#include <stdio.h>

int main() {

  int mm, dd, yy, mm1, dd1, yy1;
  printf("Enter first date (mm/dd/yy): ");
  scanf("%d/%d/%d", &mm, &dd, &yy);
  printf("Enter second date (mm/dd/yy): ");
  scanf("%d/%d/%d", &mm1, &dd1, &yy1);

  if (yy != yy1) {
    yy < yy1 ? printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", mm, dd, yy,
                      mm1, dd1, yy1)
             : printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", mm1, dd1, yy1,
                      mm, dd, yy);
  } else if (mm != mm1) {
    mm < mm1 ? printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", mm, dd, yy,
                      mm1, dd1, yy1)
             : printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", mm1, dd1, yy1,
                      mm, dd, yy);
  } else if (dd != dd1) {
    dd < dd1 ? printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", mm, dd, yy,
                      mm1, dd1, yy1)
             : printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", mm1, dd1, yy1,
                      mm, dd, yy);
  }
}
