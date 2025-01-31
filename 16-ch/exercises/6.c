// Write the following function, assuming that the time structure contains three
// members: hours, minutes, and seconds (all of type int).
//      struct time split_time(long total_seconds);
// total_seconds is a time represented as the number of seconds since midnight.
// The function returns a structure containing the equivalent time in
// hours (0-23), minutes(0-59), and seconds(0-59).

#include <stdio.h>

struct time {
  int hours, minutes, seconds;
};

struct time split_time(long total_seconds) {
  struct time t = {0, 0, 0};
  if (total_seconds > 86399) {
    printf("86400 seconds in a day\n");
    return t;
  }
  t.hours = (total_seconds / 60) / 60;
  t.minutes = (total_seconds / 60) % 60;
  t.seconds = total_seconds % 60;
  return t;
}

int main(void) {
  struct time t = split_time(86399);
  printf("%.2d:%.2d:%.2d\n", t.hours, t.minutes, t.seconds);
}
