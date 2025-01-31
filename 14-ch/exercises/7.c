// Let GENERIC_MAX be the following macro:
//  #define GENERIC_MAX(type)
//  type type##_max(type x, type y)
//  {
//      retirn x > y ? x : y;
//  }
// (a)  Show the preprocessor's expansion of GENERIC_MAX(long).
// (b)  Explain why GENERIC_MAX doesn't work for basic types such as unsigned
//      long.
// (c)  Describe a technique that would allow us to use GENERIC_MAX with
//      basic types such as unsigned long. Hint: Dont change the definition of
//      GENERIC_MAX.

#include <stdio.h>

#define GENERIC_MAX(type)                                                      \
  type type##_max(type x, type y) { return x > y ? x : y; }

// (a) GENERIC_MAX(long)
//      long long_max(long x, long y) {return x > y ? x : y; }
GENERIC_MAX(long);
GENERIC_MAX(unsigned);
// because there is a space in unsigned long?
int main(void) {
  long x = 1, y = 2, i;
  long long j = 999999999999999999, r = 100, k;
  i = long_max(x, y);
  k = unsigned_max(j, r);

  printf("%ld\n", i);

  printf("%lld\n", k);
}
