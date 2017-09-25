/*Chapter 3, Project 3 */

#include <stdio.h>

int main (void)
{
  int gs1, group, code, item, check;
  
  printf("Enter ISBN:");
  scanf("%d - %d - %d - %d - %d",&gs1,&group,&code,&item,&check);
  
  printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n",gs1,group,code,item,check);
  
  return 0;
}