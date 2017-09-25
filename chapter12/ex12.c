#include <stdio.h>

#define N 10
void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void)
{
	int greatest, next_greatest, b[N]={1,2,3,10,4,5,9,6,7,8};

	find_two_largest(b, N, &greatest, &next_greatest);

	printf("\ngreatest=%d, next greatest=%d\n", greatest, next_greatest);

	return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
	int *p=a;

	if (*a>*(a+1))
	{
		largest=a;
		second_largest=(a+1);
	}

	else
	{
		largest=(a+1);
		second_largest=a;
	}
		
	for (; p<a+n; p++)
	{
		if (*p>*largest)
		{
			second_largest=largest;
			largest=p;
		}
		
		else if (*p>*second_largest)
			second_largest=p;
	}
}

