#include<stdio.h>

int check(int x, int y, int n);

int main(void)
{
	int x, y, n;

	printf("Enter integer value for x: ");
	scanf("%d",&x);

	printf("Enter integer value for y: ");
	scanf("%d",&y);

	printf("Enter integer value for n: ");
	scanf("%d",&n);

	if (check(x, y, n))
		printf("check: true\n");
	else
		printf("check: false\n");

	return 0;
}

int check(int x, int y, int n)
{
	if ((x>=0&&x<n)&&(y>=0&&y<n))
		return 1;
	else
		return 0;
}
