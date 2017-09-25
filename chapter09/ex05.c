#include<stdio.h>

int n,i;

int count(int n);

int main(void)
{
	printf("Enter an integer: ");
	scanf("%d",&n);
	printf("%d has %d digits.\n",n,count(n));
	return 0;
}

int count(int n)
{
	for(i=0;n>0;i++)
		n=n/10;

	return i;
		
}


