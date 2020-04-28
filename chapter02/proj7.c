#include <stdio.h>

int main(void)
{
	int amount, num20, num10, num5;

	printf("Enter a whole dollar amount: $");
	scanf("%d", &amount);


	printf("$20 bills: %d\n", num20=amount/20);
	printf("$10 bills: %d\n", num10=(amount-20*num20)/10);
	printf("$ 5 bills: %d\n", num5=(amount-20*num20-10*num10)/5);
	printf("$ 1 bills: %d\n", amount-20*num20-10*num10-5*num5);

	return 0;
}
	
