// Modify Project 8 from Chapter 5 so that it includes the following function:
//
// void find_closest_flight(int desired_time, int *departure_time, int
// *arrival_time);
//
// This function will find the flight whose departure time is closest to
// desired_time (expressed in minutes since midnight). It will store the
// departure and arrival times od this flight (also expressed in minutes since
// midnight) in the variables pointed to by departure_time and arrival_time,
// respectively.

#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time,
                         int *arrival_time);

int main() {
  int hh, mm, desired_time, departure_time, arrival_time;

  printf("Enter a 24-hour time (hh:mm): ");
  scanf("%2d:%2d", &hh, &mm);

  if (hh > 23 || mm > 59) {
    printf("Invalid time\n");
    return 1;
  } else
    desired_time = (hh * 60) + mm;

  find_closest_flight(desired_time, &departure_time, &arrival_time);

  printf("Closest departure time is %d:%.2d, arriving at %d:%.2d\n",
         departure_time / 60, departure_time % 60, arrival_time / 60,
         arrival_time % 60);
}
void find_closest_flight(int desired_time, int *departure_time,
                         int *arrival_time) {

  // make an array for flight times?
  // write in number in min since midnight?

  if (desired_time < 480) {
    *departure_time = 480; // 8:00am
    *arrival_time = 616;   // 10:16am

  } else if (desired_time < 583) {
    if ((583 - desired_time) < (desired_time - 480)) {
      *departure_time = 583; // 9:43am
      *arrival_time = 712;   // 11:52am
    } else {
      *departure_time = 480; // 8:00am
      *arrival_time = 616;   // 10:16am
    }
  } else if (desired_time < 679) {
    if ((679 - desired_time) < (desired_time - 583)) {
      *departure_time = 679; // 11:19am
      *arrival_time = 811;   // 1:31pm
    } else {
      *departure_time = 583; // 9:43am
      *arrival_time = 712;   // 11:52am
    }
  }
}
