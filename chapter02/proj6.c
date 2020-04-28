#include <stdio.h>

int main(void)
{
	float x;

	printf("To compute value of ((((3x+2)x-5)x-1)x+7)x-6, enter value for x: ");
	scanf("%f", &x);

	printf("((((3*%f+2)%f-5)%f+7)%f-6) = %f\n",x,x,x,x, ((((3*x+2)*x-5)*x-1)*x+7)*x-6);

	return 0;
}
