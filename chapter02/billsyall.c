/*	divides whole dollar amount into smallest number
	of individual bills, $1-$20 */

#include <stdio.h>

int main (void)
{
  int amount, bill20, bill10, bill5, bill1;

  printf("Enter a whole dollar amount, you son of a bitch: $");
  scanf("%d", &amount);
  
  bill20 = (amount/20);
  bill10 = ((amount-(bill20*20))/10);
  bill5 = ((amount-((bill20*20)+(bill10*10)))/5);
  bill1 = ((amount-((bill20*20)+(bill10*10)+(bill5*5))));

  printf("$20 bills: %d\n", bill20);
  printf("$10 bills: %d\n", bill10);
  printf("$5 bills: %d\n", bill5);
  printf("$1 bills: %d\n", bill1);

  return 0;
}
