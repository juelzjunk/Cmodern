// Suppose that s is the following structure (point is a structure tag decalared
// in Ex 10):
int main(void) {
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
  } s;
// If the value shape_kind is RECTANGLE, the height and width members store the
// dimensions of a rectangle. If the value shape_kind is CIRCLE, the radius
// members stores the radius of a circle. Indicate which of the following
// statements are legal, and show how to repair the ones that arent:
// (a)
// s.shape_kind = RECTANGLE  // illegal if not defined
#define RECTANGLE 0
#define CIRCLE 1
  s.shape_kind = RECTANGLE;
  //
  //(b)
  s.center.x = 10; // LEGAL
  //(c)
  // s.height = 25; //ILLEGAL
  s.u.rectangle.height = 25;
  //(d)
  s.u.rectangle.width = 8; // legal
  //(e)
  // s.u.circle=5; // ILLEGAL
  //(f)
  // s.u.radius=5; //ILLEGAL
  s.u.circle.radius = 5;
}
