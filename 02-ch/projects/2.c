/*Write a program that computes the
 * volume of a sphere with a 10-meter radius
 * using the formula v=4/3(pi)r^3 .
 * Write the fraction 4/3 as 4.0f/3.0f
 * r^3 = r*r*r */
#include <stdio.h>
int main() {
  int r = 10;
  float pi = 3.1416f;
  float volume = (4.0f / 3.0f) * pi * r * r * r;
  printf("The volume of a sphere with a %d-meter radius is: %.2f\n", r, volume);
}
