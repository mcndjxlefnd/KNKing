#include<stdio.h>
int main(void)
{
	int n;

	//is the following statement legal -Yes
	n=3;
	if (n==1-10)
		printf("n=%d is between 1 and 10\n",n);

	//if so, what does it do when n is equal to 5? - nothing because 5!=-9.
	n=5;
	if (n==1-10)
		printf("n=%d is between 1 and 10\n",n);

	return 0;
}
