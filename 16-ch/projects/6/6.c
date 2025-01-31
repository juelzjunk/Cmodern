// Write a program that prompts the user to enter two
// dates and then indicates which date  comes earlier on the calendar:
//  Enter first date (mm/dd/yy): 3/6/08
//  Enter second date (mm/dd/yy): 5/17/07
//  5/17/07 is earlier than 3/6/08
#include <stdio.h>

typedef struct {
  int month, day, year;
} Date;

int compare_dates(Date d1, Date d2);
int day_of_year(Date d);
void printDate(Date d);

int main() {

  Date d1, d2;
  int i;
  printf("Enter first date (mm/dd/yy): ");
  scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);
  printf("Enter second date (mm/dd/yy): ");
  scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);

  i = compare_dates(d1, d2);

  if (i == 0) {
    printDate(d1);
    printf(" is the same has \n");
    printDate(d2);
  } else {
    printDate(i < 0 ? d1 : d2);
    printf(" is earlier than ");
    printDate(i > 0 ? d1 : d2);
  }
  printf("\n");
}

int day_of_year(Date d) {
  const int month[] = {31, 28, 31, 30, 31, 30,
                       31, 31, 30, 31, 30, 31}; // days in month
  int is_leap = (d.year % 400 == 0 || d.year % 100 != 0) &&
                (d.year % 4 == 0); // figure out if leap year
  int i = 0, days = 0;
  for (i = 0; i < d.month - 1; i++, days += month[i])
    ;            // add together days of all preceding months
  days += d.day; // add d.day
  if (is_leap && d.month > 2) {
    days++;
  }
  return days;
}

int compare_dates(Date d1, Date d2) {
  if (d1.year != d2.year)
    return d1.year < d2.year ? -1 : 1;
  int day1 = day_of_year(d1);
  int day2 = day_of_year(d2);
  return day1 - day2;
}

void printDate(Date d) { printf("%d/%d/%.2d", d.month, d.day, d.year); }
