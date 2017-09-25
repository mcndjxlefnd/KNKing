#include <stdio.h>
#include <ctype.h>
int main(void)
{
  int h,m,ch;
  
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

  printf("Equivalent 24-hour time: %d:%d\n",h,m);
  
  
  
  return 0;
}
  
