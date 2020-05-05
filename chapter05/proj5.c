#include<stdio.h>
int main(void)
{
	float amount, tax;

	printf("Enter amount of taxable income: $");
	scanf(" %f",&amount);

	printf("Tax due: $");

	if (amount<=750)
		tax=.01f*amount;
	else if (amount<=2250)
		tax=7.50f+.02f*(amount-750);
	else if (amount<=3750)
		tax=37.50f+.03f*(amount-2250);
	else if (amount<=5250)
		tax=82.5f+0.04f*(amount-5-3750);
	else if (amount<=7000)
		tax=142.5f+0.05f*(amount-5250);
	else
		tax=230+.06f*(amount-7000);

	printf("%.2f\n",tax);

	return 0;
}
