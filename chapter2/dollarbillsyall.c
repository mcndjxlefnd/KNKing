/*	divides whole dollar amount into smallest number
	of individual bills, $1-$20 */

#include <stdio.h>

#define BILL20	(amount/20)
#define BILL10	((amount-(BILL20*20))/10)
#define BILL5	((amount-(BILL20*20)-(BILL10*10))/5)
#define BILL1	((amount-(BILL20*20)-(BILL10*10)-(BILL5*5)))

int main (void)
{
  int amount;

  printf("Enter a whole dollar amount, you son of a bitch:");
  scanf("%d", &amount);

  printf("$20 bills: %d\n", BILL20);
  printf("$10 bills: %d\n", BILL10);
  printf("$5 bills: %d\n", BILL5);
  printf("$1 bills: %d\n", BILL1);

  return 0;
}
