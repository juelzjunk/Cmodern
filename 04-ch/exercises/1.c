// Show the output produced by each of the following program fragments.
// Assume that i, j, and k and int variables.
#include <stdio.h>
int main() {
  int ia = 5;
  int ja = 3;
  printf("(a) %d %d\n\n", ia / ja, ia % ja);

  int ib = 2;
  int jb = 3;
  printf("(b) %d\n\n", (ib + 10) % jb);

  int ic = 7;
  int jc = 8;
  int kc = 9;
  printf("(c) %d\n\n", (ic + 10) % kc / jc);

  int id = 1;
  int jd = 2;
  int kd = 3;
  printf("(d) %d\n\n", (id + 5) % (jd + 2) / kd);
}
