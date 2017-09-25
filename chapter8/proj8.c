#include<stdio.h>
int main(void)
{
	int i,j,block[5][5]={{0},{0}},
	   blksum[2][5]={{0},{0}},hscore=0,lscore=100;				//i=rows,j=columns

	for(i=0;i<5;i++)
		{
			printf("Enter grades for ");

			switch (i)
			{
				case(0): printf("Sally:\n"); break;
				case(1): printf("Gary:\n"); break;
				case(2): printf("Suzy:\n"); break;
				case(3): printf("Bobby:\n"); break;
				case(4): printf("Katie:\n"); break;
			}

			for(j=0;j<5;j++)
			{
				printf("Quiz %d: ",j+1);

				scanf("%d",&block[i][j]);
			
				blksum[1][j]+=block[i][j];
				blksum[0][i]+=block[i][j];
			}


		}

	printf("\nScore totals:\n\n");
	
	for(i=0;i<5;i++)
	{	
		switch (i)
			{
				case(0): printf("Sally:"); break;
				case(1): printf(", Gary:"); break;
				case(2): printf(", Suzy:"); break;
				case(3): printf(", Bobby:"); break;
				case(4): printf(", Katie:"); break;
			}
		
			printf(" %d ",blksum[0][i]);
	}
	
	printf("\n\nScore averages:\n\n");
	
	for(i=0;i<5;i++)
	{
		switch (i)
			{
				case(0): printf("Sally: "); break;
				case(1): printf(",Gary: "); break;
				case(2): printf(",Suzy: "); break;
				case(3): printf(",Bobby: "); break;
				case(4): printf(",Katie: "); break;
			}
		
			printf("%.2f ",((float)blksum[0][i])/5);
	}

	printf("\n\nQuiz totals:\n");
	
	for(j=0;j<5;j++,hscore=0,lscore=100)
	{
		printf("\nQuiz %d:\n",j);
		printf("Average score: %.2f, ",((float)blksum[1][j])/5);
		
		printf("High score: ");
		for(i=0;i<5;i++)
		{
			if(block[i][j]>hscore)
				hscore=block[i][j];
		}
		printf("%d, ",hscore);

		printf("Low score: ");
		for(i=0;i<5;i++)
		{
			if(block[i][j]<lscore)
				lscore=block[i][j];
		}
		printf("%d\n",lscore);
	}

return 0;
}

