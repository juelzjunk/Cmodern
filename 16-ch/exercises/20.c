#include <stdio.h>

// Suppose that the direction variable is declared in the following way:
// enum { NORTH, SOUTH, EAST, WEST } direction;
// Let x and y be int variables. Write a switch statement that tests the value
// of directions, incrementing x if direction is EAST, decrementing x for WEST,
// incrementing y for SOUTH, decrementing y for NORTH.
int main(void) {
  enum { NORTH, SOUTH, EAST, WEST } direction;
  int x = 0, y = 0;
  direction = NORTH;
  switch (direction) {
  case EAST:
    x++;
    break;
  case WEST:
    x--;
    break;
  case SOUTH:
    y++;
    break;
  case NORTH:
    y--;
    break;
  default:
    break;
  }
  printf("x = %d, y = %d\n", x, y);
}
