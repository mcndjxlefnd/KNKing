#include <stdio.h>
int main(void)
{
  int montha,monthb,monthc,month,daya,dayb,dayc,day,yeara,yearb,yearc,
  year;

  printf("Enter first date (mm/dd/yyyy):\n");
  scanf("%d / %d / %d",&montha,&daya,&yeara);

  printf("Enter second date (mm/dd/yyyy):\n");
  scanf("%d / %d / %d",&monthb,&dayb,&yearb);

  if (yeara<yearb)
  {
    month=montha;day=daya;year=yeara;
  }
  else if (yeara==yearb)
  {
    if (montha<monthb)
    {
      day=daya;month=montha;year=yeara;
    }
    else if (montha<monthb)
     {
       day=daya;month=montha;year=yeara;
     }
    else if (montha==monthb)
    {
      if (daya<dayb)
      {
	day=daya;month=montha;year=yeara;
      }
      else
      { 
       day=dayb;month=monthb;year=yearb;
      }
    }
  }
     
  if (montha==month&&year==yeara&&day==daya)
  {
    monthc=monthb,dayc=dayb,yearc=yearb;
  }
  else
  {
    monthc=montha,dayc=daya,yearc=yeara;
  }
   printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",month,day,year,monthc,dayc,
    yearc);
  
  return 0;
}