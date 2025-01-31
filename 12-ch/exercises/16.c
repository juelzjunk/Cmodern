// Write a loop that prints the highest temperature in the temperatures array
// (exercise 14) for each day of the week. the loop bod should call the
// find_largest function, passing it one row of the array at a time.
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 7
#define COL 24

int find_largest(int a[][COL], int row, int col, int day);

int main(void) {
  int temperatures[ROW][COL], *pTemperatures, day;
  // store random temperatures
  srand(time(NULL));
  for (pTemperatures = &temperatures[0][0];
       pTemperatures <= &temperatures[ROW - 1][COL - 1]; pTemperatures++) {
    *pTemperatures = (rand() % 99);
  }
  // print days and array

  for (int i = 0; i < ROW; i++) {
    printf("Day %d: ", i);
    for (int j = 0; j < COL; j++) {
      printf(" %.2d,", temperatures[i][j]);
    }
    printf("\b \n");
  }

  printf("\n");
  // loop to find highest temp of each day
  for (day = 0; day < ROW; day++) {
    printf("Highest temp for Day %d: %d\n", day,
           find_largest(temperatures, ROW, COL, day));
  }
}
int find_largest(int a[][COL], int row, int col, int day) {
  int *pA, max;
  pA = &a[day][0];
  for (max = *pA; pA <= &a[day][col - 1]; pA++)
    if (*pA > max)
      max = *pA;
  return max;
}
