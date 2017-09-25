#include<stdio.h>

int day_of_year(int month, int day, int year), day_is=0, day_max=365, year, month, day;

void is_leap();

int main(void)
{

	printf("Enter date in format mm/dd/yyyy");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("%.2d/%.2d/%.4d is day %d out of %d\n", month, day, year,
			day_of_year(month,day,year), day_max);

	return 0;
}

void is_leap(void)
{
	if (year%4==0&&day_is>59)
	{
		day_max++;
		day_is++;
	}
}

int day_of_year(int month, int day, int year)
{
	switch(month)
	{
		case 1:	day_is=0;	break;
		case 2:	day_is=31;	break;
		case 3: day_is=31+28;	break;
		case 4: day_is=31+28+31;	break;
		case 5: day_is=31+28+31+30;	break;
		case 6: day_is=31+28+31+30+31;
		case 7: day_is=31+28+31+30+31+30;	break;
		case 8: day_is=31+28+31+30+31+30+31;	break;
		case 9: day_is=31+28+31+30+31+30+31+31;	break;
		case 10:day_is=31+28+31+30+31+30+31+31+30;	break;
		case 11:day_is=31+28+31+30+31+30+31+31+30+31;	break;
		case 12:day_is=(365-(31-day)); break;
	}

	if(month!=12)
		day_is+=day;

	is_leap();

	return day_is;
}





