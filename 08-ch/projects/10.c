// Modify program so that the departure times are stored in an array
// and the arrival times are stored in a second array.
// (the times are integers, representing the number of minutes since midnight)
// The program will use a loop to search the array of departure times
// for the one closest to the time entered by the user.
//
// The following table shows the daily flights from one city to another:
// Departure time
// 8:00 a.m.    480
// 9:43 a.m.    583
// 11:19 a.m.   679
// 12:47 p.m.   767
// 2:00 p.m     840
// 3:45 p.m.    945
// 7:00 p.m.    1140
// 9:45 p.m.    1305
//
// Arrival time
// 10:16 a.m.   616
// 11:52 a.m.   712
// 1:31 p.m.    811
// 3:00 p.m.    900
// 4:08 p.m.    968
// 5:55 p.m.    1075
// 9:20 p.m.    1280
// 11:58 p.m.   1438

#include <stdbool.h>
#include <stdio.h>
#define N 8
int main() {

  int departure[N] = {480, 583, 679, 767, 840, 945, 1140, 1305},
      arrival[N] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
  int i = 0, hh = 0, mm = 0, time = 0, dhh = 0, dmm = 0, ahh = 0, amm = 0;
  char dam_pm = 'a', aam_pm = 'a', useram_pm;
  bool am = false, pm = false; // true or false

  printf("Enter a time (12:00 pm): ");
  scanf("%2d:%2d", &hh, &mm);
  while ((useram_pm = getchar()) == ' ')
    ;

  // check for expected format
  // todo check for incorrect characters
  switch (useram_pm) {
  case 'a': {
    am = true;
    break;
  }
  case 'p': {
    pm = true;
    break;
  }
  default: {
    printf("Incorrect entry \n");
    return 0;
  }
  }

  if (hh > 12 || mm > 59 || (hh == 0 && mm == 0)) {
    printf("Incorrect time format\n");
    return 0;
  }
  // convert to 24hr format
  if (am && hh == 12) {
    hh = 0;
  }
  if (pm && hh != 12) {
    hh += 12;
  }
  // convert to minutes past 12am
  time = (hh * 60) + mm;
  printf("time= %d\n", time);

  if (time > 1304 || (time >= 0 && time < 479)) {
    printf("Last departure is 9:45pm \nPLEASE TRY AGAIN FOR TOMORROW 8AM!!!\n");
    return 0;
  }

  for (i = 0; i < N; i++) {
    if (time < departure[i]) {
      if ((departure[i] - time) < (time - departure[i - 1])) {
        break;
      } else {
        i--;
        break;
      }
    }
  }
  // 12 hr format
  dhh = departure[i] / 60;
  dmm = departure[i] % 60;
  ahh = arrival[i] / 60;
  amm = arrival[i] % 60;
  // am pm
  if (dhh > 12) {
    dhh -= 12;
    dhh != 12 ? dam_pm = 'p' : dam_pm;
  }
  if (ahh > 12) {
    ahh -= 12;
    ahh != 12 ? aam_pm = 'p' : aam_pm;
    aam_pm = 'p';
  }
  printf("Closest departure time is %2d:%.2d %c.m, arriving at %2d:%.2d %c.m\n",
         dhh, dmm, dam_pm, ahh, amm, aam_pm);
  return 0;
}
