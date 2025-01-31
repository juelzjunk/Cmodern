// Write calls of printf that display a
// float variable x in the following formats
#include <stdio.h>

int main() {
  float x = 10;
  //(a) Exponential notation; left-justified in a field of size 8;
  // one digit after the decimal point.
  printf("|%-8.1e|\n", x);
  //(b) Exponential notation; right-justified in a field size 10;
  // six digits after the decimal point
  printf("|%10.6e|\n", x);
  //(c) Fixed deciaml notation; left-justified in a field of size 8;
  // three digits after the decimal point.
  printf("|%-8.3g|\n", x);
  // Fixed decimal notation; right-justified in a field of size 6;
  // no digits after the decimal point.
  printf("|%6g|\n", x);
}
