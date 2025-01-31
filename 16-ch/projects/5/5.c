#include <stdio.h>
struct time {
  int departure; // minutes since midnight
  int arrival;   // minutes since midnight
} flights[] = {
    {480, 616}, {583, 712},  {679, 811},   {767, 900},
    {840, 968}, {945, 1075}, {1140, 1280}, {1305, 1438},
};

void printflight(int i);

int main(void) {
  int hh = 0, mm = 0, min = 0;
  int i = 0, n = sizeof(flights) / sizeof(flights[0]);

  printf("Enter a 24-hour time (hh:mm): ");
  scanf("%2d:%2d", &hh, &mm);

  if (hh > 23 || mm > 59) {
    fprintf(stderr, "Invalid time\n");
    return -1;
  }

  min = (hh * 60) + mm; // convert to mintues since midnight

  while (i < n && min > flights[i].departure) {
    i++;
  }
  if (i == 0) {        // i = 0
  } else if (i == n) { // past last departure
    i = n - 1;
  } else if ((flights[i].departure - min) < (min - flights[i - 1].departure)) {
  } else {
    i--; // earlier flight is closer in time
  }
  printf("Closest departure time is ");
  printflight(flights[i].departure);
  printf(", arriving at ");
  printflight(flights[i].arrival);
  printf("\n");
}
void printflight(int i) {
  int hours = i / 60, minutes = i % 60;
  printf("%d:%.2d", hours >= 13 ? hours - 12 : hours, minutes);
  printf("%s", hours > 11 ? " p.m." : " a.m.");
}
