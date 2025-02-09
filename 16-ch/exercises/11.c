// Suppose that s is the following structure:
struct {
  double a;
  union {
    char b[4];
    double c;
    int d;
  } e;
  char f[4];
} s;
// if char values occupy one byte, int values occupy four bytes, and double
// values occupy eight bytes, how much space will a C compiler allocate for s?
// (Assume that the compiler leaves no "holes" between members.)
//
// double a = 8 bytes
// union e = 8 bytes;
// char f[4] = 4 bytes
// total 20 bytes
