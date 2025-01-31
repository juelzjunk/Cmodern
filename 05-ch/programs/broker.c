// When stocks are sold or purchased through a broker, the broker's commission
// is often computed using a sliding scale that depends upon the value of the
// stocks traded. Let's say that a broker charges the amounts shown in the
// following table:
//
//       Transaction size  Commission rate
//          under $2500         $30  + 1.7%
//          $2500-$6250         $56  + 0.66%
//          $6250-$20000        $76  + 0.34%
//          $20000-$50000       $100 + 0.22%
//          $50000-$500000      $155 + 0.11%
//          over $500000        $255 + 0.09%
// The minimum charge is $39 Our next program asks the user to enter the maount
// of the trade, then displays the amount of the commission:
//      Enter value of trade: 30000
//      Commission: $166.00
//
//  Calculate a broker's commission
#include <stdio.h>

int main() {
  float commission, value;

  printf("Enter value of trade: ");
  scanf("%f", &value);

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
  printf("Commission: $%.2f\n", commission);
  return 0;
}
