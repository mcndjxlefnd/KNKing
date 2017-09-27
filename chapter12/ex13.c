/* Initializes an identity matrix in an array of size N-square */

#include <stdio.h>

#define N 5

void id_matrix(int *a, int n);

int main(void)
{
	int id[N], *p, q=0;

	id_matrix(id, N);

	for (p=id; p<id+(N*N); p++)
	{
		printf("%d ", *p);
		if (q++%N==0)
			putchar('\n');
	}

	return 0;
}

void id_matrix(int *a, int n)
{
	int *p, q;

	for (p=a; p<a+(n*n); p++)
	{
		if (p==a)
			*p=1;

		if (q++<n)
			*p=0;
		else
		{
			*p=1;
			q=0;
		}
	}
}
