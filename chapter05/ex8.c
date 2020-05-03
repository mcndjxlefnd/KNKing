#include<stdio.h>
#include<stdbool.h>
int main(void)
{

	int age;
	bool teenager;
	
	printf("Enter age: ");
	scanf(" %d", &age);

	if	(age >= 13)
		if (age <= 19)
			teenager = true;
		else
			teenager = false;
	else if (age < 13)
		teenager = false;

	printf("teenager? - %s\n", teenager?"true":"false");
	
	teenager = ( age < 20 && age > 12 ? true : false);
	
	printf("teenager? - %s\n", teenager?"true":"false");

	return 0;
}
