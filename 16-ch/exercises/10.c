// The following structures are designed to store information about objects on a
// graphics screen:
//      struct point {int x,y;};
//      struct rectangle { struct point upper_left, lower_right;};
// A point structure stores the x and y coordinates of a point on the screen. A
// rectangle structure stores the coordinates of the upper_left and lower_right
// corners of a rectangle. Write the functions that perform the following
// operations on a rectangle structure r passed as an argument:
//      (a) Compute the area of r.
//      (b) Compute the center of r, returning it as a point value. If either
//          the x or y coordinate of the center isnt an integer, store its
//          truncated value in the point structure.
//      (c) Move r by x units in the x direction and y units in the y direction,
//          returning the modified version of r. ( x and y are additional
//          arguments to the function)
//      (d) Determine whether a point p lies within r, returning true or false.
//          (p is an additional argument of type struct point)
//
//
//
//
#include <stdbool.h>
#include <stdio.h>

struct point {
  int x, y;
};
struct rectangle {
  struct point upper_left, lower_right;
};

// a
int area_rectangle(struct rectangle r) {
  // a = wl
  int width = 0, length = 0;

  length = r.upper_left.x < r.lower_right.x ? r.lower_right.x - r.upper_left.x
                                            : r.upper_left.x - r.lower_right.x;

  width = r.upper_left.y < r.lower_right.y ? r.lower_right.y - r.upper_left.y
                                           : r.upper_left.y - r.lower_right.y;

  return width * length;
}
// // b
struct point center_rectangle(struct rectangle r) {
  // (x1+x2)/2 , (y1+y2)/2
  return (struct point){((r.upper_left.x + r.lower_right.x) / 2),
                        ((r.upper_left.y + r.lower_right.y) / 2)};
}
// // c
struct rectangle move_direction(struct rectangle r, int x, int y) {
  return (struct rectangle){{(r.upper_left.x + x), (r.upper_left.y + y)},
                            {(r.lower_right.x + x), (r.lower_right.y + y)}};
}
// // d
bool p_in_Rectangle(struct rectangle r, struct point p) {
  return (p.x >= r.upper_left.x && p.y <= r.upper_left.y &&
          p.x <= r.lower_right.x && p.y >= r.lower_right.y);
}
int main(void) {
  struct rectangle r1;
  r1.upper_left.x = 1;
  r1.upper_left.y = 4;
  r1.lower_right.x = 6;
  r1.lower_right.y = 1;

  struct rectangle r2;
  r2.upper_left.x = -3;
  r2.upper_left.y = 2;
  r2.lower_right.x = 3;
  r2.lower_right.y = -2;

  printf("Area of r1 = %d\n", area_rectangle(r1));
  printf("Area of r2 = %d\n", area_rectangle(r2));

  struct point p1 = center_rectangle(r1);
  struct point p2 = center_rectangle(r2);
  printf("Center of r1 = (%d,%d)\n", p1.x, p1.y);
  printf("Center of r2 = (%d,%d)\n", p2.x, p2.y);

  struct rectangle r1moved = move_direction(r1, 2, 2);
  printf("r1 moved = (%d,%d),(%d,%d)\n", r1moved.upper_left.x,
         r1moved.upper_left.y, r1moved.lower_right.x, r1moved.lower_right.y);

  struct point p3 = {0, 2};

  if (p_in_Rectangle(r1, p3))
    puts("true");
  else
    puts("false");
}
