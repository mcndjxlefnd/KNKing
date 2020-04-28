#include <stdio.h>

int main(void)
{
	float x;
	int i, j;

	scanf("%d%f%d", &i, &x, &j);

/*	If the user enters
	10.3 5 6
	What will be the values of i, x, and j after the call?
		i=10, x=0.3, j=5*/

	printf("x(float) = %f\n", x);
	printf("i, j(int) = %d, %d\n", i, j);

	return 0;
}

