#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main() {
  // Generate 10 x 10 array all chars initialized to '.'
  // Program must randomly "walk" from element to element,
  // always going up, down, left, or right by one element.
  // Elements visited will be labeled A thtough Z, in the order visited.
  // srand((unsigned)time(NULL));
  // move = rand() % 4;
  const char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
                             'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
                             'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
  int a = 0, move = 0;
  srand((unsigned)time(NULL));
  // initialize board to '.'
  char board[N][N];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      board[i][j] = '.';
    }
  }
  int is = 0, js = 0;
  do {
    // CLEAN IT UP
    // FIGURE OUT HOW TO WALK
    // need program to remember where it is in the array and putchar?
    move = rand() % 4;
    if (board[is + 1][js] != '.' && board[is - 1][js] != '.' &&
        board[is][js + 1] != '.' && board[is][js - 1] != '.') {
      printf("YOUDIE!!!\n");
      return 0;
    }
    switch (move) {

    case 0:
      printf("MOVE LEFT\n");
      if (js > 0) {
        js--;
        if (board[is][js] != '.') {
          js++;
          printf("cant\n");
          break;
        } else
          board[is][js] = alphabet[a];
        a++;
        break;

      } else {
        printf("cant\n");
        break;
      }

    case 1:
      printf("MOVE RIGHT\n");
      if (js < N) {
        js++;
        if (board[is][js] != '.') {
          js--;
          printf("cant\n");
          break;
        } else
          board[is][js] = alphabet[a];
        a++;
        break;
      } else {
        printf("cant\n");
        break;
      }
      break;

    case 2:
      printf("MOVE UP\n");
      if (is > 0) {
        is--;
        if (board[is][js] != '.') {
          is++;
          printf("cant\n");
          break;
        } else
          board[is][js] = alphabet[a];
        a++;
        break;
      } else {
        printf("cant\n");
        break;
      }

    case 3:
      printf("MOVE DOWN\n");
      if (is < N) {
        is++;
        if (board[is][js] != '.') {
          is--;
          printf("cant\n");
          break;
        } else
          board[is][js] = alphabet[a];
        a++;
        break;
      } else {
        printf("cant\n");
        break;
      }
    }

    for (int ii = 0; ii < N; ii++) {
      for (int jj = 0; jj < N; jj++) {
        printf("%c", board[ii][jj]);
        printf(" ");
      }
      printf("\n");
    }
  } while (getchar() == '\n' && a < 26);
}
