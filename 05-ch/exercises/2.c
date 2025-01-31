#include <stdio.h>

int main() {
  int ia = 10;
  int ja = 5;
  printf("(a) %d\n", !ia < ja);

  int ib = 2;
  int jb = 1;
  printf("(b) %d\n", !!ib + !jb);

  int ic = 5;
  int jc = 0;
  int kc = -5;
  printf("(c) %d\n", ic && jc || kc);

  int id = 1;
  int jd = 2;
  int kd = 3;
  printf("(d) %d\n", id < jd || kd);
}
