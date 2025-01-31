// mod project 4 to solve for
//( ( ( ( 3 x + 2 ) x - 5 ) x - 1 ) x + 7 ) x - 6
#include <stdio.h>
int main() {

  int x;
  int value;
  printf("What is x: ");
  scanf("%d", &x);

  value = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

  printf("if x = %d\n", x);
  printf("Then the value of ( ( ( ( 3 x + 2 ) x - 5 ) x - 1 ) x + 7 ) x - 6 "
         "is: %d,\n",
         value);
  return 0;
}
