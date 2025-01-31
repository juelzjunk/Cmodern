// Write a loop that prints all temperature readings stored in row i of the
// temperatures array (exercise 14). Use a pointer to visit each element of the
// row.

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 7
#define COL 24

bool search(const int a[][COL], int row, int col, int key);

int main(void) {
  int i, temperatures[ROW][COL], *pTemperatures;
  // store random temperatures
  srand(time(NULL));
  for (pTemperatures = &temperatures[0][0];
       pTemperatures <= &temperatures[ROW - 1][COL - 1]; pTemperatures++) {
    *pTemperatures = (rand() % 99);
  }
  printf("Pick row i to print: ");
  scanf("%d", &i);
  while (i < 7) {
    // print row i
    for (pTemperatures = temperatures[i];
         pTemperatures <= &temperatures[i][COL - 1]; pTemperatures++) {
      printf(" %d,", *pTemperatures);
    }
    printf("\b \n");
    printf("Pick row i to print: ");
    scanf("%d", &i);
  }
}
