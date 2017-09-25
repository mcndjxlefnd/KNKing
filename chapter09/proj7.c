#include<stdio.h>

float power(float, int);

float expt(float, int);

int main(void)
{
	float base;
	int exp;

	printf("Enter a postive integer base to be raised to an exponent: ");
	scanf("%f",&base);

	printf("Enter a positive integer exponent: ");
	scanf("%d",&exp);

	printf("power value: %g\nexpt value: %g\n",power(base,exp),expt(base,exp));

	return 0;
}

float power (float base, int exp)
{
	if (exp==1)
		return base;
	else
		return base*power(base,exp-1);
}

float expt (float base, int exp)
{
	if (exp==0)
		return 1;
	if (exp==1)
		return base;
	if (exp%2==0)
		return expt(base,exp/2)*expt(base,exp/2);
	else
		return base*expt(base,exp-1);
}

