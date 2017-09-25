#include <stdio.h>
int main(void)
{
  int montha=99,monthb=99,month=99,daya=99,dayb=99,day=99,yeara=9999,yearb=9999,year=9999,i;

  for(i=1;;i++)
  {
daya=day;montha=month;yeara=year; 

printf("Enter a date (mm/dd/yyyy):\n");
  scanf("%d / %d / %d", &monthb,&dayb,&yearb);

if((dayb+monthb+yearb)==0)
	break;	

if(yeara<yearb||yearb<yeara)
  {
	  if(yeara<yearb)
	  {
		  goto datea;
	  }
	  else
	  {
		  goto dateb;
	  }
  }
  else
  {
	if(montha<monthb||monthb<montha)
	{
		  if(montha<monthb)
		  {
			  goto datea;
		  }
		  else
		  {
			  goto dateb;
		  }
	}
	else
	{
		if(daya<dayb)
		{
			goto datea;
		}
		else
		{
			goto datea;
		}
	}
   }
datea:
  	day=daya;month=montha;year=yeara;
continue;
dateb:
	day=dayb;month=monthb;year=yearb;
  }
       	printf("%d/%d/%d is the earliest date\n",month,day,year);

  return 0;
}
