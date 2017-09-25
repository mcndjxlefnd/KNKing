#include<stdio.h>

void create_square(int n, int square[n][n]);

void print_square(int n, int square[n][n]);

int main(void)
{
	int n;
	
	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");

	scanf("%d",&n);

	int square[n][n];
	
	create_square(n,square);
	
	print_square(n,square);	

	return 0;
}

void create_square(int n, int square[n][n])
{
  int i,j,q,li,lj;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			square[i][j]=0;
	}
	
	i=0;
	j=n/2;
	q=1;
	
	while(q<=(n*n))
	{	
		if(square[i][j]==0)
		{
			square[i][j]=q;			
			li=i;
			lj=j;
			q+=1;
			i-=1;
			j+=1;
		}
		else	
		{
			i=li+1;
			j=lj;
		}

		if(i==-1)
			i=(n-1);
		if(j==n)
			j=0;
	}
}

void print_square(int n, int square[n][n])
{
  int i,j;
  
  for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			printf("%4d",square[i][j]);
			printf("\n");
		}
}



	

