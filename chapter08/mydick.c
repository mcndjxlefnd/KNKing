#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n=5, j, col, q;


	for (j=0,q=1;q<(n*n+1);j++,q++)
	{
		printf("j=%d, col=%d\n",j,j%n);
	}

	
	
	
	return 0;
}

