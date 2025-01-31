// (a) Declare structure variables named c1, c2, and c3, each having
//     memebers real and imaginary of type double.
// (b) Modify the declaration in part (a) so that c1's members initially
//     have the values 0.0 and 1.0, while c2's memebers are 1.0 and 0.0
//     initially. (c3 is not initialized)
// (c) Write statements that copy the members of c2 into c1.
//     Can this be done in one statment, or does it require two?
// (d) Write statements that add the corresponding members od c1 and c2,
//     storing the result in c3.
// #include <stdio.h>

int main(void) {
  //(a)
  struct {
    double real, imaginary;
  } c; // c1,c2,c3

  //(b)
  struct {
    double real, imaginary;
  } c1 = {0.0, 1.0}, c2 = {1.0, 0.0}, c3;
  // printf("c1 real:%g c1 imaginary:%g\n", c1.real, c1.imaginary);
  // printf("c2 real:%g c2 imaginary:%g\n", c2.real, c2.imaginary);

  //(c)
  c1 = c2;
  // printf("c1 real:%g c1 imaginary:%g\n", c1.real, c1.imaginary);
  // printf("c2 real:%g c2 imaginary:%g\n", c2.real, c2.imaginary);

  //(d)
  c3.real = c1.real + c2.real;
  // printf("c3 real:%g c3 imaginary:%g\n", c3.real, c3.imaginary);
}
