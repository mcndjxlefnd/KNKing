#include <stdio.h>

int main (void)
{
  float principle, interest, payment, balance;
  int n,i;
  
  printf("Enter amount of loan: $");
  scanf("%f", &principle);

  printf("Enter interest rate: %%");
  scanf("%f", &interest);

  printf("Enter monthly payment: $");
  scanf("%f", &payment);

  printf("Enter number of payments: ");
  scanf("%d", &n);

  for(i=1;i<=n;i++)
  {
	  balance=((principle*(1+interest/1200))-(payment));
	  printf("the remaining balance after %d payment(s) is $%.2f\n",i,balance);
	  principle=balance;
  }
  return 0;
}
