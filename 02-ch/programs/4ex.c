// Write a program that declares several int and float
// variables--without initializing them-- and then
// print their values. Is there any pattern? Usually no.

#include <stdio.h>

int main() {
  int a, b;
  float c, d;

  printf("%d %d %f %f\n", a, b, c, d);
  return 0;
}
// 0 0 145827766642549413721003079920280141824.000000 0.000000
// ^output. no idea if this is correct.
