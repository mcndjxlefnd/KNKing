

double inner_product(double a[], double b[], int n)
{
	int i, sum=0;

	for(i=0;i<n;i++)
		sum+=a[i]*b[i];
	return sum;
}

