/*****************************************************************************
 *Remove the num_in_rank, num_in_suit, and card_exists arrays from poker.c  *
 * Have the program store the cards in a 5 x 2 array instead.                *
 * Each row of the array will represent a card.                              *
 *                                                                           *
 * For example, if the array is named hand,                                  *
 * then hand[0][0] will store the rank of the first card                     *
 * and hand[0][1] will store the suit of the first card.                     *
 *****************************************************************************/
// Classifies a poker hand

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5
#define SUIT 2
// external variables
// int num_in_rank[NUM_RANKS];
// int num_in_suit[NUM_SUITS];
int hand[NUM_CARDS][SUIT] = {0};
bool straight, flush, four, three;
int pairs; // can be 0,1, or 2

// prototypes
void read_cards(void);
void analyze_hand(void);
void print_result(void);

/***********************************************************
 * main: Calls read_cards, analyze_hand, and print_result  *
 *       repeatedly                                        *
 * *********************************************************/

int main(void) {
  // for (;;) {
  read_cards();
  // delete debug
  printf("\n");
  printf("input:\n");
  for (int i = 0; i < NUM_CARDS; i++) {
    for (int j = 0; j < SUIT; j++) {
      printf("%d", hand[i][j]);
    }
    printf("  ");
  }
  printf("\n");
  analyze_hand();
  print_result();
  // }
}
/***********************************************************
 * read_cards: Reads the cards into the external variables *
 *             num_in_rank and num_in_suit;                *
 *             checks for bad cards and duplicate cards    *
 * *********************************************************/
void read_cards(void) {
  int i = 0, j = 0;
  int ii = 0, jj = 0;
  char ch, rank_ch, suit_ch;
  int rank, suit;
  bool bad_card, duplicate_card = false;
  int cards_read = 0;

  while (cards_read < NUM_CARDS) {
    bad_card = false;
    duplicate_card = false;
    printf("Enter a card: ");

    rank_ch = getchar();
    switch (rank_ch) {
    case '0':
      exit(EXIT_SUCCESS);
    case '2':
      rank = 0;
      break;
    case '3':
      rank = 1;
      break;
    case '4':
      rank = 2;
      break;
    case '5':
      rank = 3;
      break;
    case '6':
      rank = 4;
      break;
    case '7':
      rank = 5;
      break;
    case '8':
      rank = 6;
      break;
    case '9':
      rank = 7;
      break;
    case 't':
    case 'T':
      rank = 8;
      break;
    case 'j':
    case 'J':
      rank = 9;
      break;
    case 'q':
    case 'Q':
      rank = 10;
      break;
    case 'k':
    case 'K':
      rank = 11;
      break;
    case 'a':
    case 'A':
      rank = 12;
      break;
    default:
      bad_card = true;
    }

    suit_ch = getchar();
    switch (suit_ch) {
    case 'c':
    case 'C':
      suit = 0;
      break;
    case 'd':
    case 'D':
      suit = 1;
      break;
    case 'h':
    case 'H':
      suit = 2;
      break;
    case 's':
    case 'S':
      suit = 3;
      break;
    default:
      bad_card = true;
    }

    while ((ch = getchar()) != '\n')
      if (ch != ' ') {
        bad_card = true;
      }

    // check for duplicate
    // cannot use 2c because 0 0
    int pass;
    for (i = 0, j = 0, pass = 0; i < NUM_CARDS; i++, pass++)
      if (pass == 0 && rank == 0 && suit == 0)
        break;
      else if (hand[i][j] == rank && hand[i][j + 1] == suit) {
        duplicate_card = true;
      }

    if (duplicate_card)
      printf("Duplicate Card; ignored.\n");
    else if (bad_card)
      printf("Bad Card; ignored.\n");
    else {
      hand[ii][jj] = rank;
      hand[ii++][jj + 1] = suit;
      cards_read++;
    }
  }
}

/***********************************************************
 * analyze_hand: Determines whether the hand contains a    *
 *               straight, a flush, four-of-a-kind,        *
 *               and/or three-of-a-kind; determines the    *
 *               number of pairs; stores the results into  *
 *               the external variables straight, flush,   *
 *               four,three,pairs.                         *
 ***********************************************************/
void analyze_hand(void) {

  // int num_consec = 0;
  int rank = 0, suit = 0, pass = 0, highrank = 0, highsuit = 0, suit_consec = 0;

  straight = false;
  flush = false;
  four = false;
  three = false;
  pairs = 0;
  // sort hand by rank
  // its ugly but it works
  for (pass = 0; pass < NUM_CARDS; pass++) {
    highrank = 0, highsuit = 0;
    for (rank = 0, suit = 0; rank < NUM_CARDS - pass; rank++) {

      if (hand[rank][suit] > highrank &&
          hand[rank][suit] > hand[(NUM_CARDS - pass) - 1][suit]) {
        highrank = hand[rank][suit];
        highsuit = hand[rank][suit + 1];
        hand[rank][suit] = hand[(NUM_CARDS - pass) - 1][suit];
        hand[rank][suit + 1] = hand[(NUM_CARDS - pass) - 1][suit + 1];
        hand[(NUM_CARDS - pass) - 1][suit] = highrank;
        hand[(NUM_CARDS - pass) - 1][suit + 1] = highsuit;
      }
    }
  }

  // delete debug
  printf("in order:\n");
  for (int i = 0; i < NUM_CARDS; i++) {
    for (int j = 0; j < SUIT; j++) {
      printf("%d", hand[i][j]);
    }
    printf("  ");
  }
  printf("\n");

  // check for flush
  for (rank = 0, suit = 1, suit_consec = hand[rank][suit]; rank < NUM_CARDS;
       rank++) {
    if (hand[rank][suit] != suit_consec) {
      flush = false;
      break;
    } else {
      flush = true;
    }
  }

  // check for straight
  int card = hand[0][0];
  for (rank = 1, suit = 0; rank < NUM_CARDS; rank++) {
    if (hand[rank][suit] != card + 1)
      break;
    else
      card = hand[rank][suit];
    straight = true;
  }

  //   // check for four-of-a-kind, three-of-a-kind, and pairs
  int run = 0;
  card = 0;
  rank = hand[card][0];

  while (card < NUM_CARDS) {
    card++;
    if (hand[card][0] == rank) {
      run++;
    }

    switch (run) {
    case 2:
      pairs++;
      break;
    case 3:
      three = true;
      break;
    case 4:
      four = true;
      break;
    }
  }

} // close analyze_hand

////////////////
// DOESNOTWORK//
////////////////
//
//   // check for four-of-a-kind, three-of-a-kind, and pairs
//   for (rank = 0; rank < NUM_RANKS; rank++) {
//     if (num_in_rank[rank] == 4)
//       four = true;
//     if (num_in_rank[rank] == 3)
//       three = true;
//     if (num_in_rank[rank] == 2)
//       pairs++;
//   }
// }
//
/*********************************************************
 * print_result: Prints the classification of the hand,  *
 *               based on the values of the external     *
 *               variables straight, flush, four, three, *
 *               and pairs.                              *
 *********************************************************/
void print_result(void) {
  if (straight && flush)
    printf("Straight flush");
  else if (four)
    printf("Four-of-a-kind");
  else if (three && pairs == 1)
    printf("Full house");
  else if (flush)
    printf("Flush");
  else if (straight)
    printf("Straight");
  else if (three)
    printf("Three-of-a-kind");
  else if (pairs == 2)
    printf("Two pairs");
  else if (pairs == 1)
    printf("Pair");
  else
    printf("High card");

  printf("\n\n");
}
