// Printing a one month reminder list
//
//  Enter a day and reminder: 24 Susan's birthday
//  Enter a day and reminder: 5 6:00 - Dinner with Marge and Russ
//  Enter a day and reminder: 26 Movie - "Chinatown"
//  Enter a day and reminder: 7 10:30 - Dental Appt
//  Enter a day and reminder: 12 Movie - "Dazed and Confused"
//  Enter a day and reminder: 5 Saturday Class
//  Enter a day and reminder: 12 Saturday Class
//  Enter a day and reminder: 0
//
//  Day Reminder
//    5 Saturday Class
//    5 6:00 - Dinner with Marge and Russ
//    7 10:30 - Dental Appt
//   12 Saturday Class
//   12 Movie - "Dazed and Confused"
//   24 Susan's birthday
//   26 Movie - "Chinatown"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REMIND 50 // maximum number of reminders
#define MSG_LEN 60    // max length of reminder message

int read_line(char str[], int n);

int main(void) {

  char *reminders[MAX_REMIND]; // NEW
  char day_str[3], msg_str[MSG_LEN + 1];
  int day, i, j, num_remind = 0;

  for (;;) {
    if (num_remind == MAX_REMIND) {
      printf("--No space left--\n");
      break;
    }

    printf("Enter day and reminder: ");
    scanf("%2d", &day);
    if (day == 0)
      break;
    sprintf(day_str, "%2d", day);
    read_line(msg_str, MSG_LEN);

    for (i = 0; i < num_remind; i++)
      if (strcmp(day_str, reminders[i]) < 0)
        break;
    for (j = num_remind; j > i; j--)
      // NEW
      reminders[j] = reminders[j - 1];

    reminders[i] = malloc(2 + strlen(msg_str) + 1);
    if (reminders[i] == NULL) {
      printf("-- No space left --\n");
    }
    // ENDNEW
    strcpy(reminders[i], day_str);
    strcat(reminders[i], msg_str);

    num_remind++;
  }

  printf("\nDay Reminder\n");
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
