#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	char map[10][10],alpha='A';
	int dir,i,j,q;
	srand((unsigned) time(NULL));
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
			map[i][j]='.';
	}
	printf("\n");

	for(i=0,j=0,map[i][j]=alpha++;alpha<='Z';alpha++)
	{	
		
		for(;;)
		{
		dir=rand()%4;
		
		if((i==0&&dir==1)||(i==9&&dir==3))	continue;
		if((j==0&&dir==0)||(j==9&&dir==2))	continue;
		if ((map[i+1][j]!=46||i==9)&&(map[i][j+1]!=46||j==9)&&(map[i-1][j]!=46||i==0)&&(map[i][j-1]!=46||j==0)) goto mark;
		if (dir==3 && map[i+1][j]!=46)		continue;
		if (dir==2 && map[i][j+1]!=46)		continue;
		if (dir==1 && map[i-1][j]!=46)		continue;
		if (dir==0 && map[i][j-1]!=46)		continue;

		switch (dir)
		{
			case 3: i+=1; break;
			case 2: j+=1; break;
			case 1: i-=1; break;
			case 0: j-=1; break;
		}
		
		break;
		}
		
		map[i][j]=alpha;
	
	}

mark:
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
			printf(" %c ",map[i][j]);
		printf("\n");
	}

	return 0;
}
