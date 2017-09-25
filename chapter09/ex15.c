

double median(double x, double y, double z)
{
	int temp;

	if (x<y&&y<z)
		temp=z;
	if (y<x&&x<z)
		temp=x;
	if (z<y&&y<x)
		temp=y;

	return temp;
}

