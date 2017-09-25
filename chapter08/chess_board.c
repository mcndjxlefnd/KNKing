#include<stdio.h>
int main(void)
{
	char chess_board[8][8]={{'r','n','b','q','k','b','n','r'},
				{'p','p','p','p','p','p','p','p'},
				{' ','.',' ','.',' ','.',' ','.'},
				{'.',' ','.',' ','.',' ','.',' '},
				{' ','.',' ','.',' ','.',' ','.'},
				{'.',' ','.',' ','.',' ','.',' '},
				{'P','P','P','P','P','P','P','P'},
				{'R','N','B','K','Q','B','N','R'}},
	     checker_board[8][8];
	int i,j;

	printf("\nchess_board:\n");
	
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			if((i+j)%2==0)
				checker_board[i][j]='B';
			else
				checker_board[i][j]='R';
		}
	}

	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			printf("%2c", chess_board[i][j]);
			if (j==7)
				printf("\n");
		}
	}
	
	printf("\nchecker_board:\n");
	
	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			printf("%2c", checker_board[i][j]);
			if (j==7)
				printf("\n");
		}
	}

	return 0;
}

