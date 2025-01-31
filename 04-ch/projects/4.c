// Write a program that reads an int entered by user
// and displays it in octal (base 8)
//  Enter a number between 0 and 32767: 1953
//  In Octal, your number is: 03641
#include <stdio.h>
int main() {
  int n;
  
  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &n);
  printf("In Octal, your number is: %d%d%d%d%d\n", (n /= 8) % 8, (n /= 8) % 8,
         (n /= 8) % 8, (n /= 8) % 8, n % 8);
}
