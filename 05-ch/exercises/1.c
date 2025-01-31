#include <stdio.h>

int main() {
  int ia = 2;
  int ja = 3;
  int ka = ia * ja == 6;
  printf("%d\n", ka);

  int ib = 5;
  int jb = 10;
  int kb = 1;
  printf("%d\n", kb > ib < jb);

  int ic = 3;
  int jc = 2;
  int kc = 1;
  printf("%d\n", ic < jc == jc < kc);

  int id = 3;
  int jd = 4;
  int kd = 5;
  printf("%d\n", id % jd + id < kd);

  return 0;
}
