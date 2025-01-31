// write a function day_of_year(month,day,year) that returns the day of the year
// (an integer between 1 and 366) specified by three arguments.
#include <stdio.h>

int day_of_year(int month, int day, int year) {
  // 9 4 6 11= 30
  // 2=28
  // else 31
  // days since jan 1 = 0
  // if (month > 0 && day > 0 && day < 31)
  //   return (month - 1) * 30 + day;
  // return 0;
  const int monthinDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 31, 31, 30, 31};
  int daySinceJanOne = 0;
  for (int i = 0;
       i < month - 1 && month > 0 && month <= 12 && day > 0 && day <= 31; i++)
    daySinceJanOne += monthinDays[i];
  return daySinceJanOne;
}

int main() { printf("%d\n", day_of_year(4, 1, 2024)); }
