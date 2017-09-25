#include<stdio.h>
int main(void)
{
	int i,j,block[5][5]={{0},{0}},
	   blksum[2][5]={{0},{0}};				//i=rows,j=columns

	for(i=0;i<5;i++)
		{
			printf("Enter row %d: ",i+1);

			for(j=0;j<5;j++)
			{
				scanf(" %d",&block[i][j]);
			
				blksum[1][j]+=block[i][j];
				blksum[0][i]+=block[i][j];
			}


		}

	printf("\nRow totals:");
	
	for(i=0;i<5;i++)
		printf(" %d ",blksum[0][i]);

	printf("\nColumn totals: ");
	
	for(j=0;j<5;j++)
		printf("% d",blksum[1][j]);

return 0;
}

