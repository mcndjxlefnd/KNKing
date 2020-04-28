#include <stdio.h>

int main(void)
{
	float x, y;
	int i;

	scanf("%f%d%f", &x, &i, &y);

/*	If the user enters
	12.3 45.6 789
	What will be the values of x, i, and y after the call?
		x=12.3, i=45, y=0.6 */

	printf("x,y(float) = %f,%f\n", x, y);
	printf("i(int) = %d\n", i);

	return 0;
}

