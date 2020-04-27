#include <stdio.h>

int main(void)
{
	float x;

	printf("To compute value of 3x^5+2x^4-5x^3-x^2+7x-6, enter value for x: ");
	scanf("%f", &x);

	printf("3x^(%f)5+2(%f)^4-5(%f)^3-(%f)^2+7(%f)-6 = %f\n",x,x,x,x,x, 3*(x*x*x*x*x)+2*(x*x*x*x)-5*x*x*x-x*x+7*x-6);

	return 0;
}
