#include<stdio.h>

float taxing(float),income;


int main(void)
{

  printf("Enter your taxable income amount:\n$");
  scanf("%f", &income);

  printf("Tax due: $%.2f\n", taxing(income));
  
  return 0;
}

float taxing(float income)
{
       	float tax;

	if (income<750)
		tax=.01*income;
	else if (income<2250)
		tax=7.50+.02*(income-7.50);
	else if (income<3750)
		tax=37.50+.03*(income-2250);
	else if (income<5250)
		tax=82.50+.04*(income-3750);
	else if (income<7000)
		tax=142.50+.05*(income-5250);
	else
		tax=230.00+0.06*(income-7000);

	return tax;
}

