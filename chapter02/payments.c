#include <stdio.h>

#define MONTH1 ((principle * (1 + (.06/12)))-payment)
#define MONTH2 ((MONTH1 * (1 + (.06/12)))-payment)
#define MONTH3 ((MONTH2 * (1 + (.06/12)))-payment)

int main (void)
{
  float principle, interest, payment;

  printf("Enter amount of loan: $");
  scanf("%f", &principle);

  printf("Enter interest rate: %");
  scanf("%f", &interest);

  printf("Enter monthly payment: $");
  scanf("%f", &payment);

  printf("Balance remaining after first monthly payment: $%.2f\n", MONTH1);
  printf("Balance remaining after second monthly payment: $%.2f\n", MONTH2);
  printf("Balance remaining after third monthly payment: $%.2f\n", MONTH3);

  return 0;
}