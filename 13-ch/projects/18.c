// Write a program that accepts a date from the user in the form
// mm/dd/yyyy and then displays it in the form month dd, yyyy,
// where month is the name of the month:
//      Enter a date (mm/dd/yyyy): 2/17/2011
//      You entered the date February 17, 2011
// Store the month names in an array that contains pointers to string.
#include <stdio.h>

const char *months[12] = {"January",   "February", "March",    "April",
                          "May",       "June",     "July",     "August",
                          "September", "October",  "November", "December"};
int main(void) {
  int mm = 0, dd = 0, yyyy = 0;
  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%2d/", &mm);  // add check for ranges 1-12
  scanf("%2d/", &dd);  // 1-31
  scanf("%4d", &yyyy); // <9999
  printf("You entered the date %s %d, %d\n", months[mm - 1], dd, yyyy);
}
