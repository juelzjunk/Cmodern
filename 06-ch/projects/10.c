// Programming Project 9 in Chapter 5 asked you to write a program
// that determines which of two dates comes earlier on the calendar.
// Generalize the program so that the user may enter any number of dates.
// The user will enter 0/0/0 to indicate that no more dates will be entered:
// Enter a date (mm/dd/yy) : 3/6/08
// Enter a date (mm/dd/yy) : 5/17/07
// Enter a date (mm/dd/yy) : 6/3/07
// Enter a date (mm/da/yy) : 0/0/0
// 5/17/07 is the earliest date

#include <stdio.h>

int main() {
  int mm, dd, yy, mm1, dd1, yy1;

  printf("Enter a date (mm/dd/yy): ");
  scanf("%d/%d/%d", &mm, &dd, &yy);

  if (mm1 == 0 || dd1 == 0 || yy1 == 0) {
    return 0;
    while (1) {
      printf("Enter a date (mm/dd/yy): ");
      scanf("%d/%d/%d", &mm1, &dd1, &yy1);
      if (mm1 == 0 || dd1 == 0 || yy1 == 0) {
        break;
      } else if (yy1 < yy || (yy1 == yy && mm1 < mm) ||
                 (yy == yy1 && mm1 == mm && dd1 < dd)) {
        yy = yy1;
        mm = mm1;
        dd = dd1;
      }
    }
    printf("%d/%d/%.2d is earliest date\n", mm, dd, yy);
  }
}
