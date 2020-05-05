/* Calculates a broker's commission */
#include <stdio.h>
int main(void)
{
	float commission,rival_commission, value, price;
	int num;

	printf("Enter number of shares: ");
	scanf(" %d", &num);
	printf("Enter price of shares: $");
	scanf(" %f", &price);

	value=price*num;

	if (value < 2500.00f)
		commission = 30.00f + 0.017f * value;
	else if (value < 6250.00f)
		commission = 56.00f + 0.0066f * value;
	else if (value < 20000.00f)
		commission = 76.00f + 0.0034f * value;
	else if (value < 50000.00f)
		commission = 100.00f + 0.0022f * value;
	else if (value < 500000.00f)
		commission = 155.00f + 0.0011f * value;
	else
		commission = 255.00f + 0.0009f * value;

	if (commission < 39.00f)
		commission = 39.00f;

	if (num<2000)
		rival_commission=33+.03f*num;
	else rival_commission=33+.02f*num;

	printf("Commission: $%.2f\nRival broker: $%.2f\n", commission, rival_commission);

	return 0;
}
