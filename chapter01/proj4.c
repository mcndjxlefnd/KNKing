#include <stdio.h>

int main(void)
{
	float amount;

	printf("Enter a dollars-and-cents amount: $");
	scanf("%f", &amount);

	printf("With tax added: $%.2f\n", 1.05*amount);
	return 0;
}
