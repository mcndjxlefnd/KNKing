int fact(int n)
{
	int prod=1;

	while(n>1)
		prod*=n--;

	return prod;
}

