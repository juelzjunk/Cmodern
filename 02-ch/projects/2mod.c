// Modify Projest 2 so that it prompts
// user to enter the radius of the sphere#include <stdio.h>
#include <stdio.h>
int main() {
  int r;
  float pi = 3.1416f;
  printf("What is the radius of the sphere?: ");
  scanf("%d", &r);
  float volume = (4.0f / 3.0f) * pi * r * r * r;
  printf("The volume of a sphere with a %d-meter radius is: %.2f\n", r, volume);
}
