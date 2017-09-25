#include <stdio.h>

#define MAX_DIGITS 10

char zero[3][4]={{' ','_',' ',' '},
		 {'|',' ','|',' '},
		 {'|','_','|',' '}},

one[3][4]={{' ',' ',' ',' '},
	   {' ',' ','|',' '},
	   {' ',' ','|',' '}},

two[3][4]={{' ','_',' ',' '},
	   {' ','_','|',' '},
	   {'|','_',' ',' '}},

three[3][4]={{' ','_',' ',' '},
	     {' ','_','|',' '},
	     {' ','_','|',' '}},

four[3][4]={{' ',' ',' ',' '},
	    {'|','_','|',' '},
	    {' ',' ','|',' '}},

five[3][4]={{' ','_',' ',' '},
	    {'|','_',' ',' '},
	    {' ','_','|',' '}},

six[3][4]={{' ','_',' ',' '},
	   {'|','_',' ',' '},
	   {'|','_','|',' '}},

seven[3][4]={{' ','_',' ',' '},
	     {' ',' ','|',' '},
	     {' ',' ','|',' '}},

eight[3][4]={{' ','_',' ',' '},
	     {'|','_','|',' '},
	     {'|','_','|',' '}},

nine[3][4]={{' ','_',' ',' '},
	    {'|','_','|',' '},
	    {' ','_','|',' '}};

int digits[MAX_DIGITS], num_read=0;

void read_digits(void);
void print_digits(void);
void print_segment(int [], int, int);


int main (void)
{
	printf("Enter a number: ");

	read_digits();

	print_digits();

	return 0;
}

void read_digits(void)
{
	char ch;

	while ((ch=getchar())!='\n' && num_read<MAX_DIGITS)
	{
		if (ch>47 && ch<58)
			digits[num_read++]=ch-48;
	}
}

void print_digits(void)
{
	int row, digit;

	for (row=0;row<3;)
	{
		for (digit=0; digit<num_read; digit++)
			print_segment(digits, digit, row);

		putchar('\n');
		row++;
	}
}

void print_segment(int digits[], int n, int row)
{
	int digit=digits[n];

	switch (digit)
	{
		case 0: for (int col=0; col<4; col++)
				putchar(zero[row][col]);
			break;
		case 1: for (int col=0; col<4; col++)
				putchar(one[row][col]);
			break;
		case 2: for (int col=0; col<4; col++)
				putchar(two[row][col]);
			break;
		case 3: for (int col=0; col<4; col++)
				putchar(three[row][col]);
			break;
		case 4: for (int col=0; col<4; col++)
				putchar(four[row][col]);
			break;
		case 5: for (int col=0; col<4; col++)
				putchar(five[row][col]);
			break;
		case 6: for (int col=0; col<4; col++)
				putchar(six[row][col]);
			break;
		case 7: for (int col=0; col<4; col++)
				putchar(seven[row][col]);
			break;
		case 8: for (int col=0; col<4; col++)
				putchar(eight[row][col]);
			break;
		case 9: for (int col=0; col<4; col++)
				putchar(nine[row][col]);
			break;
	}
}
