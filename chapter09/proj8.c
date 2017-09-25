#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <lyle.h>


bool play_game(void);

int roll_dice(void);

int main(void)
{
	char play='Y';

	int wins=0,losses=0,result;


	while(play=='Y'||play=='y')
	{
		result=play_game();
		
		switch (result)
		{
			case 1:
				printf("You win!\n");
				wins++;
				break;
			case 0:
				printf("You lose!\n");
				losses++;
				break;
		}

		printf("Play again?\n");

		play=getchar();
		
		while ((getchar())!='\n');
	}
	printf("Wins: %d Losses: %d\n", wins, losses);

	return 0;
}

bool play_game(void)
{
	int roll=roll_dice(), point;
	
	printf("You rolled: %d\n", roll);
	
	switch (roll)
	{
		case 2: case 3: case 12: return 0;
		case 7: case 11: return 1;
		case 4: case 5: case 6: case 8: case 9: case 10:
			printf("Your point is %d\n", roll);
			point=roll;
			break;
	}

	for (;;)
	{
		roll=roll_dice();

		printf("You rolled: %d\n", roll);

		if (roll==point)
		{
			return 1;
		}
		if (roll==7)
		{
			return 0;
		}
	}
}

int roll_dice(void)
{
	srand((unsigned int) time(NULL));

	int sum=0, die[6]={1,2,3,4,5,6};

	delay(rand()/1000);	

	sum += die[rand()%6];

	delay(rand()/1000);

	sum += die[rand()%6];

	return sum;
}
