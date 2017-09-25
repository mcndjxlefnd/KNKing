a.

int greatest(int n, int a[n])
{
	int temp=a[0],i;

	for(i=0;i<n;i++)
		if (a[i]>temp)
			temp=a[i];
	return temp;
}

b.

float average(int n, int a[n])
{
	int sum=0,i;

	for(i=0;i<n;sum+=a[i++]);
	
	return (float)sum / (float) i;
}

c.

int numpos(int n, int a[n])
{
	int pos=0;

	for(i=0;i<n;i++)
		if (a[i]>0)
			pos++;

	return pos;
}



