// Rewrite the following function to use pointer arithmetic instead of array
// subscripting. (in other words, eliminate the variable i and all uses of the
// [] operator.) Make as few changes as possible.
//
// void store_zeros(int a[], int n){
// int i;
//
// for (i=0;i<n;i++)
// a[i]=0;
// }
#include <stdio.h>
#define N 10
void store_zeros(int a[], int n);

int main(void) {
  int a[N], *pX;
  store_zeros(a, N);

  for (pX = a; pX < a + N; pX++)
    printf(" %d,", *pX);
  printf("\b \n");
}

void store_zeros(int a[], int n) {
  int *pA;
  for (pA = a; pA < a + n; pA++)
    *pA = 0;
}
