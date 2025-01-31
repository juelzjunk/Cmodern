// Write a program that calculates the remaining balance
// on a loan after tthe first, second, and third monthly payments.
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
  float amount_of_loan, interest_rate, monthly_payment, monthly_interest_rate,
      monthly_interest_amount;
  float totaldue, balance, first_payment, second_payment, third_payment;
  printf("Enter amount of loan: ");
  scanf("%f", &amount_of_loan);
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);
  monthly_interest_rate = (interest_rate * .01) / 12;
  monthly_interest_amount = amount_of_loan * monthly_interest_rate;
  first_payment = amount_of_loan - monthly_payment;
  first_payment = first_payment + monthly_interest_amount;

  monthly_interest_amount = first_payment * monthly_interest_rate;
  second_payment = first_payment - monthly_payment;
  second_payment = second_payment + monthly_interest_amount;

  monthly_interest_amount = second_payment * monthly_interest_rate;
  third_payment = second_payment - monthly_payment;
  third_payment = third_payment + monthly_interest_amount;

  printf("Balance remaining after first payment: %.2f\n", first_payment);
  printf("Balance remaining after second payment: %.2f\n", second_payment);
  printf("Balance remaining after third payment: %.2f\n", third_payment);
  //
  // third_payment = totaldue - monthly_payment;
  // totaldue = third_payment + monthly_interest_rate;
  // printf("Balance remaining after third payment: %.2f\n", totaldue);
  //
  return 0;
}
