#include <stdio.h>
int main(void)
{
	int n;

//Is the following if statement legal? - Yes	
	n=3;
	if (n>=1<=10)
		printf("n=%d is between 1 and 10\n",n);
//If so, what does it do when n is equal to zero? - Moves to next statement (skip) - OOPS, nope. relational operators are left assiociative.
	n=0;
	if (n>=1<=10)
		printf("n=%d is between 1 and 10\n",n);

	return 0;
}
