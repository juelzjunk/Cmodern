// Write the following function:
//
// void split_time(long total_sec, int *hr, int *min, int *sec);
//
// total_sec is a time represented as the number of seconds since midnight.
// hr, min, and sec are pointers to variables in which the function
// will store the equivalent time in
// hours (0-23), minutes (0-59), and seconds (0-59), respectively.

#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void) {
  long sec_since_midnight = 5234;
  int hour = 0, minute = 0, seconds = 0;

  split_time(sec_since_midnight, &hour, &minute, &seconds);

  printf("The time is: %d:%.2d:%.2d\n", hour, minute, seconds);
}

void split_time(long total_sec, int *hr, int *min, int *sec) {

  *min = total_sec / 60;
  *sec = total_sec % 60;
  *hr = *min / 60;
  *min = *min % 60;
}
