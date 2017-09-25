#include<stdio.h>
int main(void)
{
	int i,fib[40]={0,1};

	for(i=2;i<40;i++)
		fib[i]=fib[i-1]+fib[i-2];
	for(i=0;i<40;i++)
	{
		if(i<39)
			printf("%d, ",fib[i]);
		else
			printf("%d\n",fib[i]);
	}

	return 0;
}
