#include <stdio.h>
int main(void)
{
  int h,m, t,diff,ldiff=500,i,q,dt[8]={8*60,9*60+43,11*60+19,12*60+47,14*60,15*60+45,19*60,21*60+45},at[8]={10*60+16,11*60+52,13*60+31,15*60,16*60+8,17*60+55};
  
  printf("Enter a 24-hour time: ");
  scanf(" %d : %d",&h,&m);
  
  t=60*h+m;
  
  for(i=0;i<8;i++)
  {
   diff=dt[i]-t;
	  if(diff>=0 && diff<ldiff)
	  {
		  ldiff=diff;
		  q=i;
	  }
  }

  switch (q)
  {
	case 0:
      	printf("Closest departure time is 8:00am, arriving at 10:16am\n"); break;
  	case 1:
	printf("Closest departure time is 9:43am, arriving at 11:52am\n"); break;
  	case 2:
	printf("Closest departure time is 11:19am, arriving at 1:31pm\n"); break;
  	case 3:
	printf("Closest departure time is 12:47pm, arriving at 3:00pm\n"); break;
	case 4:
   	printf("Closest departure time is 2:00pm, arriving at 4:08pm\n"); break;
 	case 5:
  	printf("Closest departure time is 3:45pm, arriving at 5:55pm\n"); break;
  	case 6:
  	printf("Closest departure time is 7:00pm, arriving at 9:20pm\n"); break;
  	case 7:
	printf("Closest departure time is 9:45pm, arriving at 11:58pm\n"); break;
  }
  return 0;
}
  
