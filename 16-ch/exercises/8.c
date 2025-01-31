// Let color be the following structure:
struct color {
  int red;
  int green;
  int blue;
};
// (a) Write a declaration for a const variable named MAGENTA of type struct
//     color whose members have the values 255,0,255 respectively.
const struct color MAGENTA = {255, 0, 255};
// (b) (C99) Repeat part (a), but use a designated initializer that doesnt
//     specify the value of green, allowing it to default to 0.
const struct color MAGENTA99 = {.red = 255, .green = 0, .blue = 255};
