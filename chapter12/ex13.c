#include <stdio.h>

#define N 2

int main(void)
{
	double ident[N][N], *p;
	int num_zeros=N;
	
	for (p=&ident[0][0]; p<=&ident[N-1][N-1]; p++)
	{
		if (num_zeros==N)
		{
			*p=1.0;
			num_zeros=0;
		}
		else
		{
			*p=0.0;
			num_zeros++;
		}
	}

	for (int row=0; row<N; row++)
	{
		for (int col=0; col<N; col++)
			printf("%g ", ident[row][col]);
		putchar('\n');
	}

	return 0;
}
		

