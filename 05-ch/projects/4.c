// Speed (knots)    Description
// less than 1      Calm
// 1-3              Light air
// 4-27             Breeze
// 28-47            Gale
// 48-63            Storm
// Above 63         Hurricane
#include <stdio.h>

int main() {
  int windspeed;
  printf("Enter wind speed (in knots): ");
  scanf("%d", &windspeed);
  if (windspeed < 1) {
    printf("Condition is Calm.\n");
  } else if (windspeed < 3) {
    printf("There is light air.\n");
  } else if (windspeed < 27) {
    printf("There is a breeze.\n");
  } else if (windspeed < 47) {
    printf("There is a Gale.\n");
  } else if (windspeed < 63) {
    printf("There is a Storm.\n");
  } else {
    printf("There is a Hurricane!!\n");
  }
}
