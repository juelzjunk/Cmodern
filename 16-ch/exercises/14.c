// Let shape be the structure tag declared in Exercise 13. Write functions that
// perform the following operations on a shape structure s passed as an
// argument:
#define RECTANGLE 1
#define CIRCLE 0

struct point {
  int x, y;
};

struct shape {
  int shape_kind;      // RECTANGLE or CIRCLE
  struct point center; // coordinates of center
  union {
    struct {
      int height, width;
    } rectangle;
    struct {
      int radius;
    } circle;
  } u;
};

//(a) Compute the area of s
int areaofS(struct shape s) {
  // RECTANGLE = w*l
  // CIRCLE = 3.14 * (r*r)
  return s.shape_kind ? s.u.rectangle.height * s.u.rectangle.width
                      : 3.14 * (s.u.circle.radius * s.u.circle.radius);
}
//(b) Move s by x units in the x direction and y units in the y direction,
//    returning the modified version of s. (x and y are additional arguments
//    to the function.)
struct shape move_direction(struct shape s, int x, int y) {
  s.center.x += x;
  s.center.y += y;
  return s;
}

//(c) Scale s by a factor of c (a double value), returning the modified
//    version of s. (c is an additional argument to the function.)
struct shape scale_factor(struct shape s, double c) {
  if (s.shape_kind) {
    s.u.rectangle.width *= c;
    s.u.rectangle.height *= c;
  } else
    s.u.circle.radius *= c;
  return s;
}
