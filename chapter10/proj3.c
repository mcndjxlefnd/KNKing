#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5
#define RANK 0
#define SUIT 1

int hand[NUM_CARDS][2];

bool straight, flush, four, three;
int pairs;

void read_cards(void);
void analyze_hand(void);
void print_result(void);

int main(void)
{
	for(;;)
	{
		read_cards();
		analyze_hand();
		print_result();
	}
}

void read_cards(void)
{
	char ch;
	int rank, suit;
	int cards_read=0;

	for (int i=0, j=0;i<NUM_CARDS;i++)
		for (j=0;j<2;j++)
			switch (j)
			{
				case 0: hand[i][j]=0; break;
				case 1: hand[i][j]=4; break;
			}


	for (int i=0;cards_read<NUM_CARDS;)
	{
		bool good_card=true, bad_card=false;

		printf("Enter a card: ");

		ch=getchar();
		switch (ch)
		{
			case '0': exit(EXIT_SUCCESS);
			case '2': rank=0; break;
			case '3': rank=1; break;
			case '4': rank=2; break;
			case '5': rank=3; break;
			case '6': rank=4; break;
			case '7': rank=5; break;
			case '8': rank=6; break;
			case '9': rank=7; break;
			case 't': case 'T': rank=8; break;
			case 'j': case 'J': rank=9; break;
			case 'q': case 'Q': rank=10; break;
			case 'k': case 'K': rank=11; break;
			case 'a': case 'A': rank=12; break;
			default: bad_card=true;
		}

		ch=getchar();
		switch (ch)
		{
			case 'c': case 'C': suit=0; break;
			case 'd': case 'D': suit=1; break;
			case 'h': case 'H': suit=2; break;
			case 's': case 'S': suit=3; break;
			default: bad_card=true;
		}

		while ((ch=getchar())!='\n')
			if (ch!=' ') bad_card=true;

		if (bad_card)
		{
			printf("Bad card; ignored.\n");
			continue;
		}
	
		else
			for (int p=0;p<NUM_CARDS;p++)
				if (hand[p][0]==rank && hand[p][1]==suit)
				{
					good_card=false;
					printf("Duplicate card; ignored.\n");
					break;
				}
				
		if (good_card)
		{

			hand[i][0]=rank;
			hand[i++][1]=suit;
			cards_read++;
		}
	}

}

void analyze_hand(void)
{
	int rank, suit, num_consec=0;
	bool change;

	straight=true;
	flush=true;
	four=false;
	three=false;
	pairs=0;

	/*organize hand*/

	for (int i=0; i<NUM_CARDS;)
	{
		change=false;
		rank=hand[i][RANK];
		suit=hand[i][SUIT];

		for (int p=0; p<NUM_CARDS;p++)
		{
			if (p==i)
				continue;
			if (p<i && (hand[p][RANK])>(hand[i][RANK]))
			{
				hand[i][RANK]=hand[p][RANK];
				hand[i][SUIT]=hand[p][SUIT];
				hand[p][RANK]=rank;
				hand[p][SUIT]=suit;
				change=true;
				break;
			}
			if (p>i && hand[p][RANK]<hand[i][RANK])
			{
				hand[i][RANK]=hand[p][RANK];
				hand[i][SUIT]=hand[p][SUIT];
				hand[p][RANK]=rank;
				hand[p][SUIT]=suit;
				change=true;
				break;
			}
		}
		
		if (change)
			continue;
		i++;
	}
	

	printf("\n");	
	for (int i=0; i<5; i++)
	{
		for (int j=0; j<2; j++)
		{
			printf("%d", hand[i][j]);
		}
		printf("\n");
	}
	
	
	
	/*check for flush*/
	for (int i=0, temp=hand[i][1]; i<NUM_CARDS; i++)
		{
			if (hand[i][1]!=temp)
				flush=false;
		}

	/*check for straight*/	
	for (int i=0; i<NUM_CARDS-1; i++)
	{
		if (hand[i][0]+1!=hand[i+1][0])
			straight=false;
	}
	
	if (straight)
		return;

	/*check for 4-of-a-kind, 3-of-a-kind, and pairs*/
	for (int p=0; p<NUM_CARDS; p++)
	{
		int num_alike=1;
		
		if (duplicate[p])
			continue;
		
		bool duplicate[5]={false};

		for (int i=0; i<NUM_CARDS; i++)
		{
			if (i==p)
				continue;
			else
			{
				if (hand[i][0]==hand[p][0])
				{
					num_alike++;
					duplicate[i]=true;
				}
			}
		}

		switch (num_alike)
		{
			case 4: four=true; return;
			case 3: three=true; break;
			case 2: pairs++; break;
		}
	}
}

void print_result(void)
{
	if (straight && flush) printf("Straight flush");
	else if (four) printf("Four of a kind");
	else if (three && pairs==1) printf("Full house");
	else if (flush) printf("Flush");
	else if (straight) printf("Straight");
	else if (three) printf("Three of a kind");
	else if (pairs==2) printf("Two pairs");
	else if (pairs==1) printf("Pair");
	else printf("High card");

	printf("\n\n");
}

