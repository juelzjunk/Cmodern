/*
 * Enter amount of loan: 20000.00
 * Enter interest rate: 6.0
 * Enter monthly payment: 386.66
 *
 * Balance remaining after first payment: 19713.34
 * Balance remaining after second payment: 19425.25
 * Balance remaining after third payment: 19135.71
 */
#include <stdio.h>
int main() {
  float loan, interest_rate, monthly_payment, monthly_interest_rate,
      monthly_interest_amount;
  int payment, loop;
  printf("Enter amount of loan: ");
  scanf("%f", &loan);

  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  monthly_interest_rate = (interest_rate * .01) / 12;

  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  printf("Enter number of payments made: ");
  scanf("%d", &payment);

  for (loop = 1; payment > 0; payment--, loop++) {
    loan = (loan - monthly_payment) + loan * monthly_interest_rate;
    printf("Balance remaining after %d payment(s): %.2f\n", loop, loan);
  }

  return 0;
}
