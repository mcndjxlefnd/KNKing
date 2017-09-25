#include <stdio.h>

int main(void)
{
  float principle, pinterest, interest, payment, balance1, balance2, balance3;

  printf("Enter amount of loan: $");
  scanf("%f", &principle);

  printf("Enter interest rate: %%");
  scanf("%f", &pinterest);

  printf("Enter monthly payment: $");
  scanf("%f", &payment);

  interest = (1 + pinterest/(12 * 100));
  balance1 = principle * interest - payment;
  balance2 = balance1 * interest - payment;
  balance3 = balance2 *interest -payment;

  printf("Balance remaining after first payment: $%.2f\n", balance1);
  printf("Balance remaining after second payment: $%.2f\n", balance2);
  printf("Balance remaining after third payment: $%.2f\n", balance3);

  return 0;
}