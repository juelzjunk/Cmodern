// Improve the remind.c program of Section 13.5 in the following ways:
//      (a) Have the program print a error message and ignore a reminder if the
//          corresponding day is negative or larger than 31.
//          Hint: Use the continue statement
//      (b) Allow the user to enter a day, 24-hour time, and a reminder.
//          The printed reminder list should be sorted first by day, then by
//          time. (The original program allows the user to enter a time, but its
//          treated as part of the reminder.)
//      (c) Have the program print a one- year reminder list. Require the user
//          to enter days in the for month/day.
#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50 // maximum number of reminders
#define MSG_LEN 60    // max length of reminder message
#define MAX_HH 23
#define MAX_MM 59

int read_line(char str[], int n);

int main(void) {

  char reminders[MAX_REMIND][MSG_LEN + 3];
  char month_str[4], day_str[3], time_str[11], msg_str[MSG_LEN + 1];
  int month, day, hh = 0, mm = 0, i, j, num_remind = 0;
  char trash[MSG_LEN + 1];

  for (num_remind = 0; num_remind < MAX_REMIND;
       month = 0, hh = 0, mm = 0, num_remind++) {

    printf("Enter month day time and reminder: ");
    scanf("%2d/%2d", &month, &day);
    if (day == 0 || month == 0)
      break;
    scanf("%2d:%2d", &hh, &mm);
    // (a)
    if (month < 0 || month > 12 || day < 0 || day > 31 || hh < 0 ||
        hh > MAX_HH || mm < 0 || mm > MAX_MM) {
      printf("ERROR: wrong format(month/day hh:mm reminder)\n");
      read_line(trash, MSG_LEN);
      num_remind--;
      continue;
    }
    sprintf(month_str, "%2d/", month);
    sprintf(day_str, "%2.2d", day);
    if (hh == 0 && mm == 0)
      strcpy(time_str, " No time ");
    else
      sprintf(time_str, "  %2d:%2.2d ", hh, mm);
    read_line(msg_str, MSG_LEN);

    for (i = 0; i < num_remind; i++)
      if (strcmp(day_str, reminders[i]) < 0)
        break;
    for (j = num_remind; j > i; j--)
      strcpy(reminders[j], reminders[j - 1]);

    strcpy(reminders[i], month_str);
    strcat(reminders[i], day_str);
    strcat(reminders[i], time_str);
    strcat(reminders[i], msg_str);
  }

  if (num_remind == MAX_REMIND) {
    printf("--No space left--\n");
  }

  printf("\nmonth/Day  Time   Reminder\n");
  for (i = 0; i < num_remind; i++)
    printf(" %s\n", reminders[i]);

  return 0;
}

int read_line(char str[], int n) {
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}
