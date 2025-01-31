// (C99) Assume that the following macro definitions are in effect:
//  #define IDENT(x) PRAGMA(ident #x)
//  #define PRAGMA(x) _Pragma(#x)
// What will the following line look like after macro expansion?
//  IDENT(foo)
#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)
int main(void) {

  int foo = 1;
  //  IDENT(foo)
  IDENT(foo)
}
// I DO NOT UNDERSTAND
