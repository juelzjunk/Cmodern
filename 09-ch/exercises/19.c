// Consider the following "mystery" function:
//
// void pb(int n){
// if (n!=-0){
// pb(n/2);
// putchar('0'+n%2);
// }
// }
// Trace the execution of the function by hand. Then write a program that calls
// the function, passing it a number entered by the user. What does the function
// do?
#include <stdio.h>

void pb(int n) {
  if (n != 0) {
    pb(n / 2);
    putchar('0' + n % 2);
  }
}
int main(void) {
  int n;
  printf("Enter: ");
  scanf("%d", &n);

  pb(n);
}
// CONVERTS INPUT TO BINARY
