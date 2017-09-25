#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

	char walk[10][10],alpha='A';
	int dir,i,j,q;
	bool stuck=false;

void generate_random_walk(char walk[][10]);

void print_array(char walk[][10]);
	
int main(void)
{
	generate_random_walk(walk);

	print_array(walk);

	return 0;
}
	
void generate_random_walk(char walk[10][10])
{
	srand((unsigned) time(NULL));

	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
			walk[i][j]='.';
	}

	for(i=0,j=0,walk[i][j]=alpha++;alpha<='Z';alpha++)
	{			
		for(;;)
		{
		dir=rand()%4;
		
		if((i==0&&dir==1)||(i==9&&dir==3))	continue;
		if((j==0&&dir==0)||(j==9&&dir==2))	continue;
		if ((walk[i+1][j]!=46||i==9)&&(walk[i][j+1]!=46||j==9)&&(walk[i-1][j]!=46||i==0)&&(walk[i][j-1]!=46||j==0))
		{
			stuck=true;
			break;
		}
		if (dir==3 && walk[i+1][j]!=46)		continue;
		if (dir==2 && walk[i][j+1]!=46)		continue;
		if (dir==1 && walk[i-1][j]!=46)		continue;
		if (dir==0 && walk[i][j-1]!=46)		continue;

		switch (dir)
		{
			case 3: i+=1; break;
			case 2: j+=1; break;
			case 1: i-=1; break;
			case 0: j-=1; break;
		}
		
		break;
		}
		if (stuck)
		{
		walk[i][j]=alpha-1;
		break;
		}
		else
			walk[i][j]=alpha;
	}
}

void print_array(char walk[10][10])
{
	printf("\n");
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
			printf(" %c ",walk[i][j]);
		printf("\n");
	}
	
}

