/*Chapter 3, project 3 */

#include <stdio.h>

int main (void)
{
   int area,prefix,suffix;
   
   printf("Enter phone number [(xxx) xxx-xxxx]:");
   scanf(" ( %d ) %d - %d",&area,&prefix,&suffix);
   
   printf("You entered %d.%d.%d\n",area,prefix,suffix);
   
   return 0;
}