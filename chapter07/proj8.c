#include <stdio.h>
#include <ctype.h>
int main(void)
{
  int h,m, t, td,dt8=8*60,dt9=9*60+43,dt11=11*60+19,dt12=12*60+47,
  dt2=14*60,dt3=15*60+45,dt7=19*60,dt21=21*60+45,ch;
  
  printf("Enter a 12-hour time: ");
  scanf(" %d : %d",&h,&m);

  while ((ch=getchar())==' ');
	
  ch=toupper(ch);
  if (ch==80&&h!=12)
  {
	  h+=12;
  }
  if (ch==65&&h==12)
  {
	  h=0;
  }

  t=60*h+m;
  
  dt8=dt8-t,dt9=dt9-t,dt11=dt11-t,dt12=dt12-t,dt2=dt2-t,dt3=dt3-t,
  dt7=dt7-t,dt21=dt21-t;
  
  if (dt8*dt8<=dt9*dt9 && dt8*dt8<=dt11*dt11 && dt8*dt8<=dt12*dt12 && 
    dt8*dt8<=dt2*dt2 && dt8*dt8<=dt3*dt3 && dt8*dt8<=dt7*dt7 && 
    dt8*dt8<=dt21*dt21)
      printf("Closest departure time is 8:00am, arriving at 10:16am\n");
  else if (dt9*dt9<=dt9*dt9<=dt11*dt11 && dt9*dt9<=dt12*dt12 && 
    dt9*dt9<=dt2*dt2 && dt9*dt9<=dt3*dt3 && dt9*dt9<=dt7*dt7 && 
    dt9*dt9<=dt21*dt21)
      printf("Closest departure time is 9:43am, arriving at 11:52am\n");
  else if (dt11*dt11<=dt12*dt12 && dt11*dt11<=dt2*dt2 &&
    dt11*dt11<=dt3*dt3 && dt11*dt11<=dt7*dt7 && dt11*dt11<=dt21*dt21)
      printf("Closest departure time is 11:19am, arriving at 1:31pm\n");
  else if (dt12*dt12<=dt2*dt2 && dt12*dt12<=dt3*dt3 &&
     dt12*dt12<=dt7*dt7 && dt12*dt12<=dt21*dt21)
      printf("Closest departure time is 12:47pm, arriving at 3:00pm\n");
  else if (dt2*dt2<=dt3*dt3 && dt2*dt2<=dt7*dt7 && 
    dt2*dt2<=dt21*dt21)
      printf("Closest departure time is 2:00pm, arriving at 4:08pm\n");
  else if (dt3*dt3<=dt7*dt7 && dt3*dt3<=dt21*dt21)
      printf("Closest departure time is 3:45pm, arriving at 5:55pm\n");
  else if (dt3*dt3<=dt21*dt21)
      printf("Closest departure time is 7:00pm, arriving at 9:20pm\n");
  else printf("Closest departure time is 9:45pm, arriving at 11:58pm\n");
  
  return 0;
}
  
