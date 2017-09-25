

double inner_product(const double *a, const double *b, int n);

double inner_product(const double *a, const double *b, int n)
{
	int *p, *q, sum=0;

	for (p=a, q=b; p<a+n; p++, q++)
		sum += *p * *q;

	return sum;
}
