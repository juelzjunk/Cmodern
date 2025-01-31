// Write the evaluate_position function described in exercise 13 of chapter 9.
// Use pointer arithmetic--not subscripting--to visit array elements. Use a
// single loop instead of nested loops.

// Write the following function, which evaluates a chess position:
// int evaluate_position(char board[8][8]);
//
// K Q R B N P = white
// k q r b n p = black
// evaluate_position should sum the values of the white pieces
// Q=9 R=5 B=3 N=3 P=1
// sum black pieces similiarly
//
// function should return difference between the two numbers.
// value will be positive if White has the advantage
// and negative if black does.
#define N 8
int evaluate_position(char board[][N]);
int main(void) { return 0; }

int evaluate_position(char board[][N]) {
  int advantage = 0;
  char *pBoard;

  for (pBoard = board[0]; pBoard <= &board[N - 1][N - 1]; pBoard++) {
    switch (*pBoard) {
    case 'Q':
      advantage += 9;
      break;
    case 'R':
      advantage += 5;
      break;
    case 'B':
      advantage += 3;
      break;
    case 'N':
      advantage += 3;
      break;
    case 'P':
      advantage++;
      break;
    case 'q':
      advantage -= 9;
      break;
    case 'r':
      advantage -= 5;
      break;
    case 'b':
      advantage -= 3;
      break;
    case 'n':
      advantage -= 3;
      break;
    case 'p':
      advantage--;
      break;
    default:
      break;
    }
  }
  return advantage;
}
