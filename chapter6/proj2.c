#include <stdio.h>
int main (void)
{
	int m, n, gcd, r;

	printf("Enter two integers: ");
	scanf("%d %d", &m, &n);

	for (;;)
	{
		if (n==0)
		{gcd=m;goto _OUTSIDE_;}
		else
		{
			r=m%n;
			m=n;
			n=r;
		}
	}

_OUTSIDE_:

	printf("Greatest common divisor: %d\n", gcd);

	return 0;
}

