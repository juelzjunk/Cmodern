// Let chess_pieces be the following enumeration:
enum chess_pieces { KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN };
// (a) Write a declaration (including an initializer) for a constant array of
// integers named piece value that stores the numbers 200, 9, 5, 3, 3, and 1,
// representing the value of each chess piece, from king to pawn.

const int piece_value[] = {200, 9, 5, 3, 3, 1};

// (b) (C99) Repeat part (a) but use a designated initializer to initialize the
// array. Use the enum constant chess_pieces as subscripts in the designators.

const int piece_values[] = {
    [KING] = 200, [QUEEN] = 9,  [ROOK] = 5,
    [BISHOP] = 3, [KNIGHT] = 3, [PAWN] = 1,
};
