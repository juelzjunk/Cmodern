// Modify broker.c
//  (a) ask the user to enter the number of shares
//  and the price per share, instead of trade value.
//
//  (b) add statements that compute the commmission
//      charged by a rival broker
//          ($33 plus $.03 per share for fewer than 2000 shares
//           $33 plus $.02 per share for 2000 shares or more)
//      Display the rival's commission as well as the
//      commission charged by original broker.
#include <stdio.h>

int main() {
  float commission, value, price_per_share, shares;

  printf("Enter the number of shares you wish to buy: ");
  scanf("%f", &shares);
  printf("Enter price per share ($XXX.XX): ");
  scanf("%f", &price_per_share);

  value = shares * price_per_share;

  if (value < 2500.00f)
    commission = 30.00f + .017f * value;
  else if (value < 6250.00f)
    commission = 56.00f + .0066f * value;
  else if (value < 20000.00f)
    commission = 76.00f + .0034f * value;
  else if (value < 50000.00f)
    commission = 100.00f + .0022f * value;
  else if (value < 500000.00f)
    commission = 155.00f + .0011f * value;
  else
    commission = 255.00f + .0009f * value;

  if (commission < 39.00f)
    commission = 39.00f;
  printf("Original Broker's Commission: $%.2f\n", commission);
  printf("Rival Broker's Commission: $%.2f\n",
         shares < 2000 ? 33 + (.03 * shares) : 33 + (.02 * shares));

  return 0;
}
