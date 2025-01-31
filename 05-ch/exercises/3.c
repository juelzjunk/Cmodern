#include <stdio.h>
// short circuit behavior of logical expressions
int main() {
  int ia = 3;
  int ja = 4;
  int ka = 5;
  printf("(a) ");
  printf("%d\t", ia < ja || ++ja < ka);
  printf("%d %d %d\n", ia, ja, ka);

  int ib = 7;
  int jb = 8;
  int kb = 9;
  printf("(b) ");
  printf("%d\t", ib - 7 && jb++ < kb);
  printf("%d %d %d\n", ib, jb, kb);

  int ic = 7;
  int jc = 8;
  int kc = 9;
  printf("(c) ");
  printf("%d\t", (ic = jc) || (jc = kc));
  printf("%d %d %d\n", ic, jc, kc);

  int id = 1;
  int jd = 1;
  int kd = 1;
  printf("(d) ");
  printf("%d\t", ++id || ++jd && ++kd);
  printf("%d %d %d\n", id, jd, kd);
}
