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

int evaluate_position(char board[][N]) {
  int i, j, advantage = 0;

  for (i = 0; i < N; i++)
    for (j = 0; j < N; j++)
      switch (board[i][j]) {
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
  return advantage;
}
