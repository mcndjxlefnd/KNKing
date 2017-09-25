#include <stdio.h>

#define N 5

void store_zeros(int *a, int n);

int main(void)
{
	int b[N]={1,2,3,4,5}, *p;

	store_zeros(b,N);

	for (p=b; p<b+N; p++)
		printf(" %d", *p);

	putchar('\n');

	return 0;
}

void store_zeros(int *a, int n)
{
	int *p;

	for (p=a; p<a+n; p++)
		*p=0;
}

