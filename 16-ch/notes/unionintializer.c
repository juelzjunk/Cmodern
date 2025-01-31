int main(void) {

  // i initialized
  union {
    int i;
    double d;
  } u = {0};
  // d initialized
  union {
    int i;
    double d;
  } u1 = {.d = 10.1};
}
