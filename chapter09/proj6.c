#include<stdio.h>

float expt(float,int);

float poly(float);

int main(void)
{
	float x;

	printf("Enter a value for x: ");
	scanf("%g", &x);

	printf("The polynomial value is: %g\n", poly(x));

	return 0;

}


float poly(float x)
{
	return 3*expt(x,5)+2*expt(x,4)-5*expt(x,3)-expt(x,2)+7*expt(x,1)-6;
}

float expt(float x, int ex)
{
	if (ex==1)
		return x;
	
	return x*expt(x,ex-1);
}
