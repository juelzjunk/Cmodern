#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DI 6

int roll_dice(void);
bool play_game(void);

int main(void) {

  srand((unsigned)time(NULL));
  char yesorno;
  int win = 0, loss = 0;

  while (1) {

    if (play_game()) {
      win++;
      printf("YOU WIN!\n");
    } else {
      loss++;
      printf("YOU LOSE!\n");
    }
    printf("Wanna play again? y/n: ");
    scanf(" %c", &yesorno);
    if (tolower(yesorno) != 'y')
      break;
  }
  printf("Wins: %d\tLosses: %d\n", win, loss);
}

int roll_dice(void) {
  int dice1 = (rand() % DI) + 1; // picks a random number 1-6
  int dice2 = (rand() % DI) + 1; // picks a random number 1-6
  // printf("di 1 = %d di 2 = %d\nsum = %d\n", roll1, roll2, roll1 + roll2);
  return dice1 + dice2;
}
bool play_game(void) {
  int roll = roll_dice();
  printf("You rolled: %d\n", roll);
  if (roll == 7 || roll == 11) {
    return true; // win
  }
  if (roll == 2 || roll == 3 || roll == 12) {
    return false; // lose
  }
  int point = roll;
  printf("Your point is %d\n", point);
  roll = roll_dice();
  while (roll != point) {
    roll = roll_dice();
    printf("You rolled: %d\n", roll);
    if (roll == 7) {
      return false; // lose
    }
  }
  return true; // win
}
