#include <stdio.h>

void pay_amount(const int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
	int dollars=0, twenties=0, tens=0, fives=0, ones=0;
	
	printf("Enter a whole dollar value to be represented in the least number of bills possible: $");
	scanf("%d", &dollars);

	pay_amount(dollars, &twenties, &tens, &fives, &ones);

	printf("Twenties: %d\nTens: %d\nFives: %d\nOnes: %d\n", twenties, tens, fives, ones);

	return 0;
}

void pay_amount(const int dollars, int *twenties, int *tens, int *fives, int *ones)
{
	*twenties=dollars/20;

	*tens=(dollars-(*twenties*20))/10;

	*fives=(dollars-(*twenties*20)-(*tens*10))/5;

	*ones=dollars-(*twenties*20)-(*tens*10)-(*fives*5);
}
