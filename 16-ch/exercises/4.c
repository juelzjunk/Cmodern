// Repeat exercise 3, but this time using a type named Complex

#include <stdio.h>

//(a)
typedef struct {
  double real, imaginary;
} Complex;
//(b)
Complex c1, c2, c3;
//(c)
Complex make_complex(double real, double imaginary) {
  Complex c = {real, imaginary};
  return c;
}
//(d)
Complex add_complex(Complex a, Complex b) {
  Complex c;
  c.real = a.real + b.real;
  c.imaginary = a.imaginary + b.imaginary;
  return c;
}

int main(void) {
  c1 = make_complex(1.0, 1.0);
  c2 = make_complex(1.0, 1.0);
  c3 = add_complex(c1, c2);
  printf("c3.real: %g\nc3.imaginary: %g\n", c3.real, c3.imaginary);
}
