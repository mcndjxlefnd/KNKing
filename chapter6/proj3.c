#include <stdio.h>
int main(void)
{
	int m, n, mf, nf, gcd, r;

	printf("Enter a fraction: ");
	scanf("%d  / %d", &m, &n);

	for (mf=m,nf=n;n!=0;m=n,n=r)
		r=m%n;
	
	mf/=m;
	nf/=m;

	printf("In lowest terms: %d/%d\n",mf,nf);

	return 0;
}
