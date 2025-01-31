
int main(void) {

  union {
    int i;
    double d;
  } u;

  u.i = 82;
  // or
  u.d = 74.8;
}
