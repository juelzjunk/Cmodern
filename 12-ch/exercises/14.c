// Assume that the following array contains a weeks worth of hourly temperature
// readings, with each row containing the readings for the day:
//
// int temperatures[7][24];
//
// Write a statment that uses the search function (exercise 7) to search the
// entire temperatures array for the value 32.
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 7
#define COL 24

bool search(const int a[][COL], int row, int col, int key);

int main(void) {
  int temperatures[ROW][COL], *pTemperatures;
  // store random temperatures
  srand(time(NULL));
  for (pTemperatures = &temperatures[0][0];
       pTemperatures <= &temperatures[ROW - 1][COL - 1]; pTemperatures++) {
    *pTemperatures = (rand() % 99);
  }
  // search array
  if (search(temperatures, ROW, COL, 32))
    printf("KEY FOUND\n");
  else
    printf("KEY NOT FOUND\n");
  // print array
  for (int i = 0; i < ROW; i++) {
    for (int j = 0; j < COL; j++) {
      printf(" %d,", temperatures[i][j]);
    }
    printf("\n");
  }
}
bool search(const int a[][COL], int row, int col, int key) {
  const int *pA;
  for (pA = &a[0][0]; pA <= &a[row - 1][col - 1]; pA++) {
    if (*pA == key)
      return true;
  }
  return false;
}
