// Use typedef to create types named Int8, Int16, and Int32.
// Define the types so that they represent 8-bit, 16-bit, and 32-bit
// integers on
// your machine.
#include <stdio.h>

int main() {
  typedef char Int8;
  typedef short int16;
  typedef int int32;
  typedef long int64;
  Int8 i;
  int16 ii;
  int32 iii;
  int64 iiii;
  float f;
  double d;
  long double ld;
  long unsigned int lu;
  printf("Size of Int8:  %lu\n", sizeof(i));
  printf("Size of Int16: %lu\n", sizeof(ii));
  printf("Size of Int32: %lu\n", sizeof(iii));
  printf("Size of Int64: %lu\n", sizeof(iiii));
  printf("Size of float: %lu\n", sizeof(f));
  printf("Size of double: %lu\n", sizeof(d));
  printf("Size of long double: %lu\n", sizeof(ld));
  printf("Size of long u_int: %lu\n", sizeof(lu));
}
