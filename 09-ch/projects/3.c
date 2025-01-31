// Modify Programming Project 9 from Chapter 8 so that it includes the following
// functions:
//
// void generate_random_walk(char walk[10][10]);
// void print_array(char walk [10][10]);
//
// main first calls generate_random_walk, which initializes the array to contain
// '.' characters and then replaces some of these characters by the letters A
// through Z, as described in the original project. main then calls print_array
// to diplay the array on the screen.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void print_array(char walk[N][N]);
void generate_random_walk(char walk[N][N]);

int main() {
  char walk[N][N];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      walk[i][j] = '.';
    }
  }
  generate_random_walk(walk);
  print_array(walk);
}

void print_array(char walk[N][N]) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%c", walk[i][j]);
      printf(" ");
    }
    printf("\n");
  }
}
void generate_random_walk(char walk[N][N]) {
  char a = 'A';
  int move = 0;
  srand((unsigned)time(NULL));

  int i = 0, j = 0;
  do {
    move = rand() % 4;
    if (walk[i + 1][j] != '.' && walk[i - 1][j] != '.' &&
        walk[i][j + 1] != '.' && walk[i][j - 1] != '.') {
      printf("FAIL\n");
      return;
    }

    switch (move) {
    case 0:
      if (j > 0) {
        j--;
        if (walk[i][j] != '.') {
          j++;
          break;
        } else
          walk[i][j] = a++;
        break;
      } else {
        break;
      }

    case 1:
      if (j < N) {
        j++;
        if (j >= N) {
          j = 0;
          break;
        }
        if (walk[i][j] != '.') {
          j--;
          break;
        } else
          walk[i][j] = a++;
        break;
      } else {
        break;
      }
      break;

    case 2:
      if (i > 0) {
        i--;
        if (walk[i][j] != '.') {
          i++;
          break;
        } else
          walk[i][j] = a++;
        break;
      } else {
        break;
      }

    case 3:
      if (i < N) {
        i++;
        if (i >= N) {
          i = 0;
          break;
        }
        if (walk[i][j] != '.') {
          i--;
          break;
        } else
          walk[i][j] = a++;
        break;
      } else {
        break;
      }
    }
  } while (a <= 'Z');
  if (a == 'Z' + 1) {
    printf("WIN!\n");
  }
}
