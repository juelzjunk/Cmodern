// Write the following functions, assuming that the date structure contians
// three members: month, day, and year(all of type int);
//
// (a) int day_of_year(struct date d);
// Returns the day of the year (an integer between 1 and 366) that
// corresponds to the date d.
//
// (b) int compare_dates(struct date d1, struct date d2);
// Returns -1 if d1 is an earlier date than d2, +1 if d1
// is a later date than d2, and 0 if d1 and d2 are the same.
//

#include <stdio.h>
typedef struct {
  int month, day, year;
} Date;

// (a)
int day_of_year(Date d) {
  int i = 0, days = 0, month[] = {31, 28, 31, 30, 31, 30,
                                  31, 31, 30, 31, 30, 31}; // days in month
  for (i = 0; i < d.month - 1; i++, days += month[i])
    ;            // add together days of all preceding months
  days += d.day; // add d.day
  if (i > 2) {
    if (d.year % 400 == 0 || d.year % 100 == 0 ||
        d.year % 4 == 0) // figure out if leap year
      days++;
  }
  return days;
}

// (b)
int compare_dates(Date d1, Date d2) {
  if (d1.year < d2.year)
    return -1;
  else if (d1.year > d2.year)
    return 1;
  else if (d1.year == d2.year) {
    if (day_of_year(d1) < day_of_year(d2))
      return -1;
    else if (day_of_year(d1) > day_of_year(d2))
      return 1;
  }
  return 0;
}

int main(void) {
  Date d1 = {1, 1, 1996};
  printf("%d\n", day_of_year(d1));
  Date d2 = {1, 1, 1995};
  printf("%d\n", day_of_year(d2));
  printf("%d\n", compare_dates(d1, d2));
}
