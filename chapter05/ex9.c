//Are the following if statements equivalent? if not, why not?
	//yes, they are equivalent
#include<stdio.h>
int main(void)
{
	int score;

	printf("Enter score (0-100): ");
	scanf(" %d", &score);

	printf("First if statement: ");

	if (score>=90)
		printf("A");
	else if (score>=80)
		printf("B");
	else if (score>=70)
		printf("C");
	else if (score>=60)
		printf("D");
	else
		printf("F");

	printf("\nSecond if statement: ");

	if (score<60)
		printf("F");
	else if (score<70)
		printf("D");
	else if (score<80)
		printf("C");
	else if (score<90)
		printf("B");
	else
		printf("A");

	printf("\n");

	return 0;
}
