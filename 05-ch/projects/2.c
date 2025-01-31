// Write a program that asks the user for a 24-hour time,
// then displays the time in 12-hour form:
//      Enter a 24-hour time: 21:11
//      Equivalent 12-hour time: 9:11 PM
#include <stdio.h>

int main() {
  int hour, minute;

  printf("Enter a 24-hour time (hh:mm): ");
  scanf("%2d:%2d", &hour, &minute);
  if (hour > 23 || minute > 59)
    printf("invalid time\n");
  else if (hour == 0)
    printf("Equivalent 12-hour time: 12:%2d AM\n", minute);
  else if (hour == 12)
    printf("Equivalent 12-hour time: 12:%2d PM\n", minute);
  else if (hour < 12)
    printf("Equivalent 12-hour time: %d:%2d AM\n", hour, minute);
  else if (hour >= 12)
    printf("Equivalent 12-hour time: %d:%2d PM\n", hour - 12, minute);
  // printf("%2d:%2d\n", hour, minute);
}
