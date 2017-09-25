#include<stdio.h>

int array[100]={0},i;

void selection_sort(int, int []);

int main(void)
{
	int i;

	printf("Separated by spaces, enter a series of 9 numbers to be sorted: ");

	for(i=0;i<9;i++)
		scanf("%d",&array[i]);
	
	selection_sort(9,array);

	for(i=0;i<9;i++)
		printf("%d ",array[i]);

	putchar('\n');

	return 0;
}

void selection_sort(int n, int array[n])
{
	int mark, greatest=array[0];

	for(i=0;i<n;i++)
	{
		if (array[i]>greatest)
		{
			greatest=array[i];
			mark=i;
		}
	}

	array[mark]=array[n-1];
	array[n-1]=greatest;
	
	if (n>1)
	selection_sort(n-1, array);

}
