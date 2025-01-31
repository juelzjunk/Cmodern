#include <stdio.h>

int main() {
  int x, y, z, a, b, c;
  //(a)
  // printf("Enter number '%%d': ");
  // scanf("%d", &x);
  // printf("|%d|\n\n\n", x);
  // printf("Enter number ' %%d': ");
  // scanf(" %d", &x);
  // printf("|%d|\n\n\n", x);
  // // (b)
  // printf("Enter number '%%d-%%d-%%d': ");
  // scanf("%d-%d-%d", &x, &y, &z);
  // printf("|%d|%d|%d|\n\n", x, y, z);
  // printf("Enter number: ");
  // scanf("%d -%d -%d", &a, &b, &c);
  // printf("|%d|%d|%d|\n\n", a, b, c);
  // (c)
  float j, k, l, s, d;
  //   printf("Enter number '%%f': ");
  //   scanf("%f", &j);
  //   printf("|%f|\n\n\n", j);
  //
  //   printf("Enter number '%%f': ");
  //   scanf("%f ", &j);
  //   printf("|%f|\n\n\n", j);
  // (d)
  printf("Enter number '%%f,%%f': ");
  scanf("%f,%f", &j, &k);
  printf("|%f,%f|\n\n\n", j, k);

  printf("Enter number '%%f, &&f': ");
  scanf("%f, %f", &l, &s);
  printf("|%f,%f|\n\n\n", l, s);
}
