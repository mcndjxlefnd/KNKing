#include <stdio.h>
int main(void)
{
	int n;
	long i,m;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in the table: ");
	scanf("%d",&n);

	for (i=1;i<=n;i++)
	{
		m=i*i;
		printf("%10ld%10ld\n",i,m);
	}
	return 0;
}

