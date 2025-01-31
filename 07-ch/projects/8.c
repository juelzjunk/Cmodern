#include <ctype.h>
#include <stdio.h>

int main() {
  int hh, mm, min;
  char ch;
  printf("Enter a 12-hour time (hh:mm am/pm): ");
  scanf("%d:%d", &hh, &mm);
  // TODO 12pm 12am doesnt work
  while ((ch = getchar()) == ' ')
    ;
  ch = toupper(ch);
  switch (ch) {
  case 'P':
    while (hh != 12) {
      hh += 12;
      break;
    }
  case 'A':
    if (hh == 12) {
      hh += 11;
      break;
    }
  default:
    printf("Invalid case\n");
  }

  if (hh > 23 || mm > 59) {
    printf("Invalid time\n");
    return 0;
  } else {
    min = (hh * 60) + mm;
    if (min < 480) {
      printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");

    } else if (min < 583) {
      if ((583 - min) < (min - 480)) {
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
      } else {
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
      }

    } else if (min < 679) {
      if ((679 - min) < (min - 583)) {
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
      } else {
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
      }

    } else if (min < 767) {
      if ((767 - min) < (min - 679)) {
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
      } else {
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
      }

    } else if (min < 840) {
      if ((840 - min) < (min - 767)) {
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
      } else {
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
      }

    } else if (min < 945) {
      if ((945 - min) < (min - 840)) {
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
      } else {
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
      }

    } else if (min < 1140) {
      if ((1140 - min) < (min - 945)) {
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
      } else {
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
      }

    } else if (min < 1305) {
      if ((1305 - min) < (min - 1140)) {
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
      } else {
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
      }
    }
  }
  return 0;
}
