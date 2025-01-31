// Write the following functions. (the color struct defined in ex.8)
#include <stdbool.h>
#include <stdio.h>
struct color {
  int red;
  int green;
  int blue;
};

//  (a)
struct color make_color(int red, int green, int blue) {
  // Returns a color struct containing the specified red, green, and blue
  // values. If any argument is less than zero, the corresponding member of the
  // struct will contain zero instead. If any <255 member = 255
  if (red < 0)
    red = 0;
  else if (red > 255)
    red = 255;
  if (green < 0)
    green = 0;
  else if (green > 255)
    green = 255;
  if (blue < 0)
    blue = 0;
  else if (blue > 255)
    blue = 255;
  return (struct color){red, green, blue};
}
// (b)
int getRed(struct color c) {
  // Returns the value of c's red member.
  return c.red;
}
// (c)
bool equal_color(struct color color1, struct color color2) {
  // Returns true if corresponding members of color1 and color2 are equal
  if (color1.red == color2.red && color1.green == color2.green &&
      color1.blue == color2.blue)
    return true;
  return false;
}
// (d)
struct color brighter(struct color c) {
  // Returns a color struct that represents a brighter version of the color c.
  // The struct is identical to c, except that each member has been divided by
  // .07 (with the results truncated to an integer). However, there are three
  // special cases: (1) If all members of c are zero, the function returns a
  // color whose members all have the value 3. (2) If any member of c is
  // greater than 0 but less than 3, it is replaced by 3 before the division
  // by 0.7. (3) If dividing by 0.7 causes a member to exceed 255, it is
  // reduced to 255.

  // case 1
  if (c.red + c.green + c.blue == 0) {
    c.red = 3;
    c.green = 3;
    c.blue = 3;
    return c;
  }
  // case 2
  if (c.red > 0 && c.red < 3)
    c.red = 3;
  if (c.green > 0 && c.green < 3)
    c.green = 3;
  if (c.blue > 0 && c.blue < 3)
    c.blue = 3;

  c.red = (int)(c.red / 0.7);
  c.green = (int)(c.green / 0.7);
  c.blue = (int)(c.blue / 0.7);
  // case 3
  if (c.red > 255)
    c.red = 255;
  if (c.green > 255)
    c.green = 255;
  if (c.blue > 255)
    c.blue = 255;

  return (struct color){c.red, c.green, c.blue};
}
// (e)
struct color darker(struct color c) {
  // Returns a color structure that represents a darker version of the color
  // c. The structure is identical to c, except that each member has been
  // multiplied by 0.7 (with the result truncated to an integer).
  return (struct color){(int)(c.red * 0.7), (int)(c.green * 0.7),
                        (int)(c.blue * 0.7)};
}
int main(void) {
  struct color c1 = make_color(-10, 260, 128);
  struct color c2 = make_color(-10, 260, 128);
  printf("Color: red=%d, green=%d, blue=%d\n", c1.red, c1.green, c1.blue);

  int x = getRed(c1);
  printf("c1.red = %d\n", x);

  if (equal_color(c1, c2))
    printf("True\n");
  else
    printf("False\n");

  struct color c3 = {10, 20, 30};
  struct color result3 = brighter(c3);
  printf("Brighter color: red=%d, green=%d, blue=%d\n", result3.red,
         result3.green, result3.blue);

  result3 = darker(c3);
  printf("Darker color: red=%d, green=%d, blue=%d\n", result3.red,
         result3.green, result3.blue);

  return 0;
}
