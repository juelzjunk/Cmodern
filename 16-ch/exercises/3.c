//  (a) Show how to declare a tag named complex for a structure
//      with two members, real and imaginary, of tyoe double
//  (b) Use the complex tag to declare variables named c1,c2,c3.
//  (c) Write a function named make_complex that stores its two
//      arguments (both type double) in a complex structure,
//      then returns the structure.
//  (d) Write a function named add_complex that stores its two arguments
//      (both complex structures), then returns the result (another complex
//      structure).
#include <stdio.h>

//(a)
struct complex {
  double real, imaginary;
};
//(b)
struct complex c1, c2, c3;
//(c)
struct complex make_complex(double real, double imaginary);
//(d)
struct complex add_complex(struct complex a, struct complex b);

int main(void) {

  c1 = make_complex(1.0, 1.0);
  c2 = make_complex(1.0, 1.0);
  c3 = add_complex(c1, c2);

  printf("c3.real: %g\nc3.imaginary: %g\n", c3.real, c3.imaginary);
}

struct complex make_complex(double real, double imaginary) {
  struct complex c = {real, imaginary};
  return c;
}
struct complex add_complex(struct complex a, struct complex b) {
  struct complex c;
  c.real = a.real + b.real;
  c.imaginary = a.imaginary + b.imaginary;
  return c;
}
