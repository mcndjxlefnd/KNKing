

int find_largest(int *a, int n)
{
	int max, *p=a;

	for (max=p; p<a+n; p++)
		if (*p > max)
			max=*p;
	return max;
}
