// FINISHED 8.. i can make it better.
// loops?
//++monthly_payment or something
//  12/2/23
//
//
//
//
//  Write a program that calculates the remaining balance
//  on a loan after tthe first, second, and third monthly payments.
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
  float interest_rate, monthly_payment, monthly_interest, balance;
  printf("Enter amount of loan: ");
  scanf("%f", &balance);
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  printf("Enter auto-monthly payment: ");
  scanf("%f", &monthly_payment);

  // ???????? if (balance != 0, ++payment) ?????;
  // int payment;

  monthly_interest = balance * ((interest_rate * .01) / 12);
  balance = (balance - monthly_payment) + monthly_interest;
  printf("Balance: %.2f\n", balance);
  // printf("After your %d payment you will owe: %.2f\n", payment, balance);

  return 0;
}
