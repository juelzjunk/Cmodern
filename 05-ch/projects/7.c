// Write a program that finds the largest and smallest of four integers entered
// by the user:
//      Enter four integers: 21 43 10 35
//      Largest: 43
//      Smallest: 10
#include <stdio.h>

int main() {
  int i1, i2, i3, i4, lrg, small, lrg2, small2;
  printf("Enter four integers: ");
  scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

  if (i1 > i2) {
    lrg = i1;
    small = i2;
  } else {
    lrg = i2;
    small = i1;
  }
  if (i3 > i4) {
    lrg2 = i3;
    small2 = i4;
  } else {
    lrg2 = i4;
    small2 = i3;
  }
  if (lrg > lrg2) {
    printf("Largest: %d\n", lrg);
  } else {
    printf("Largest: %d\n", lrg2);
  }
  if (small2 > small) {
    printf("Smallest: %d\n", small);
  } else {
    printf("Smallest: %d\n", small2);
  }
  // printf("%d %d %d %d", i1, i2, i3, i4);
}
