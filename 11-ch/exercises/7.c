// Write the following function:

// void split_date(int day_of_year, int year, int *month, int *day);

// day_of_year is an integer between 1 and 366, specifying a particular
// day within the year designated by year. month and day point to
// variables in which the function will store the equivalent month (1-12)
// and day within that month (1-31).

#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main(void) {
  int day_of_year = 0, year = 0, month = 0, day = 0;

  printf("Enter day_of_year (1-366) and the year: ");
  scanf("%d %d", &day_of_year, &year);

  split_date(day_of_year, year, &month, &day);

  printf("Date: %d/%d/%d\n", month, day, year);
}

void split_date(int day_of_year, int year, int *month, int *day) {
  // 30 days: sept april june november
  // 28 days: feb unless leap year
  // 31 days else
  // if year divisible bny 4 = leap year
  int i, m[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (year % 4 == 0) // check for leap year
    m[1] = 29;

  for (i = 0; i <= 12; i++) {
    if (day_of_year > m[i]) {
      day_of_year -= m[i];
    } else {
      *month = i + 1;
      *day = day_of_year;
      break;
    }
  }
}
