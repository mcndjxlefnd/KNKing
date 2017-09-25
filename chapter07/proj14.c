#include <stdio.h>
#include <math.h>
int main(void)
{
	double x,y,av;

	printf("Enter a positive number: ");
	scanf("%lf",&x);

	for(av=1;(fabs(y-av))>=1e-5;)
	{
		y=av;
		av=(y+(x/y))/2;
	}

	printf("Square root: %g\n",av);

	return 0;
}

