#include <stdio.h>
int main() {
  // (a) Each square of a chessboard can hold one piece-- a pawn, knight,
  // bishop, rook, queen,or king --or it may be empty. Each piece is either
  // black or white. Define two enumerated types: Piece, which has seven
  // possible values (on of which is "empty"), and Color, which has two.

  enum Piece { empty, pawn, knight, bishop, rook, queen, king };
  enum Color { black, white };

  // (b) Using the types from part (a), define a structure type named Square
  // that can store both the type of a piece and its color.

  struct Square {
    enum Piece piece;
    enum Color color;
  };

  // (c) Using the Square type from part (b), declare an 8x8 array named board
  // that can store the entire contents of a chessboard.

  // struct Square chessboard[8][8];
  // (d) Add an initializer to the declaration in part (c) so that boards
  // initial value corresponds to the usual arrangement of pieces at the start
  // of a chess game. A square thats not occupied by a piece should have an
  // "empty" piece value and the color black.

  struct Square chessboard[8][8] = {{{rook, black},
                                     {knight, black},
                                     {bishop, black},
                                     {queen, black},
                                     {king, black},
                                     {bishop, black},
                                     {knight, black},
                                     {rook, black}},
                                    {{pawn, black},
                                     {pawn, black},
                                     {pawn, black},
                                     {pawn, black},
                                     {pawn, black},
                                     {pawn, black},
                                     {pawn, black},
                                     {pawn, black}},

                                    {{empty, black},
                                     {empty, black},
                                     {empty, black},
                                     {empty, black},
                                     {empty, black},
                                     {empty, black},
                                     {empty, black},
                                     {empty, black}},
                                    {{empty, black},
                                     {empty, black},
                                     {empty, black},
                                     {empty, black},
                                     {empty, black},
                                     {empty, black},
                                     {empty, black},
                                     {empty, black}},
                                    {{empty, black},
                                     {empty, black},
                                     {empty, black},
                                     {empty, black},
                                     {empty, black},
                                     {empty, black},
                                     {empty, black},
                                     {empty, black}},
                                    {{empty, black},
                                     {empty, black},
                                     {empty, black},
                                     {empty, black},
                                     {empty, black},
                                     {empty, black},
                                     {empty, black},
                                     {empty, black}},

                                    {{pawn, white},
                                     {pawn, white},
                                     {pawn, white},
                                     {pawn, white},
                                     {pawn, white},
                                     {pawn, white},
                                     {pawn, white},
                                     {pawn, white}},
                                    {{rook, white},
                                     {knight, white},
                                     {bishop, white},
                                     {queen, white},
                                     {king, white},
                                     {bishop, white},
                                     {knight, white},
                                     {rook, white}}};
  // (Optional) Print the chessboard to verify
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      printf("(%d, %d) ", chessboard[i][j].piece, chessboard[i][j].color);
    }
    printf("\n");
  }

  return 0;
}
