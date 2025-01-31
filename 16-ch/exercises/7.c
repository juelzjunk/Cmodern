// Assume that the fraction structure contains two members: numerator and
// denominator (both of type int). Write functions that perform the following
// operations on fractions:
//  (a) Reduce the fraction f to lowest terms. Hint: to reduce a fraction to
//      lowest terms, first compute the greatest common divisor (GCD) of num and
//      denom. Then divide both the num and denom by the GCD.
//  (b) Add the fractions f1 and f2.
//  (c) Subtract the fraction f2 from f1.
//  (d) Multiply the fractions f1 and f2.
//  (e) Divide the fraction f1 by f2.
//
// The fractions f, f1, and f2 will be arguments of type struct fraction; each
// function will return a value of type struct fraction. The fractions returned
// by the functions in parts (b)-(e) should be reduced to lowest terms.
// hint: You may use the function from part (a) to help write the functions.

#include <stdio.h>
typedef struct {
  int numerator, denominator;
} Fraction;

//(a)
Fraction reduce_frac(Fraction f) {
  int r = 0, n = f.numerator, d = f.denominator;
  while (n != 0) {
    r = d % n;
    d = n;
    n = r;
  }
  // d = GCD
  Fraction fReduced = {(f.numerator /= d), (f.denominator /= d)};
  return fReduced;
}

//(b)
Fraction add_frac(Fraction f1, Fraction f2) {
  Fraction fsum;
  if (f1.denominator == f2.denominator) {
    fsum.numerator = f1.numerator + f2.numerator;
    fsum.denominator = f1.denominator;
  } else {
    fsum.numerator =
        (f1.numerator * f2.denominator) + (f1.denominator * f2.numerator);
    fsum.denominator = f1.denominator * f2.denominator;
  }
  fsum = reduce_frac(fsum);
  return fsum;
}

//(c)
Fraction subtract_frac(Fraction f1, Fraction f2) { // f2 from f1
  Fraction fsub;
  if (f1.denominator == f2.denominator) {
    fsub.numerator = f1.numerator - f2.numerator;
    fsub.denominator = f1.denominator;
  } else {
    fsub.numerator =
        (f1.numerator * f2.denominator) - (f1.denominator * f2.numerator);
    fsub.denominator = f1.denominator * f2.denominator;
  }
  fsub = reduce_frac(fsub);

  return fsub;
}
//(d)
Fraction multiply_frac(Fraction f1, Fraction f2) {
  Fraction fmult;
  fmult.numerator = f1.numerator * f2.numerator;
  fmult.denominator = f1.denominator * f2.denominator;
  fmult = reduce_frac(fmult);
  return fmult;
}
//(e)
Fraction divide_frac(Fraction f1, Fraction f2) { // f1 by f2
  Fraction fdiv;
  fdiv.numerator = f1.numerator * f2.denominator;
  fdiv.denominator = f1.denominator * f2.numerator;
  fdiv = reduce_frac(fdiv);
  return fdiv;
}

int main(void) {
  Fraction f = {4, 8}, f1 = {5, 6}, f2 = {3, 4};
  Fraction fsum, fsub, fmult, fdiv;

  f = reduce_frac(f);
  printf("reduce_frac(f) = %d/%d\n", f.numerator, f.denominator);

  fsum = add_frac(f1, f2);
  printf("add_frac(f1,f2) = %d/%d\n", fsum.numerator, fsum.denominator);

  fsub = subtract_frac(f1, f2);
  printf("subtract_frac(f1,f2) = %d/%d\n", fsub.numerator, fsub.denominator);

  fmult = multiply_frac(f1, f2);
  printf("multiply_frac(f1,f2) = %d/%d\n", fmult.numerator, fmult.denominator);

  fdiv = divide_frac(f1, f2);
  printf("divide_frac(f1,f2) = %d/%d\n", fdiv.numerator, fdiv.denominator);

  return 0;
}
