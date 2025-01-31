// (a) Show what thew following program will look like after preprocessing.
//     You may ignore and lines added to the program as a result of including
//     the <stdio.h> header.
//
// #include <stdio.h>
//
// #define N 100
//
// void f(void);
//
// int main(void) {
//   f();
// #ifdef N
// #undef N
// #endif
//   return 0;
// }
// void f(void) {
// #if defined(N)
//   printf("N is %d\n", N);
// #else
//   printf("N is undefined\n");
// #endif
// }
//
//
// #include <stdio.h>
//
// #define N 100
//
// void f(void);
//
// int main(void){
// f();
//  return 0;
// }
//
// void f(void){
//  printf("N is undefined\n");
// }
//
//
// (b) What will be the output of this program?
//  printf("N is undefined\n");
