// Simplify following if statement ( the entire statement can be replaced by a
// single assignment)
//
// if (age >= 13)
//    if(age <= 19)
//    teenager = true;
//  else
//      teenager = false;
//  else if (age < 13)
//      teenager = false;

#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main() {
  int i = 11;
  int teenager = i >= 13 ? TRUE : FALSE;
  printf("%d\n", teenager);
}
