#include <stdio.h>
int main (void)
{
  int base10,first,second,third,fourth,fifth;

  printf("Enter a number between 0 and 32767: ");
  scanf("%d",&base10);

  fifth=base10%8;
  first=base10/8/8/8/8%8;
  second=base10/8/8/8%8;
  third=base10/8/8%8;
  fourth=base10/8%8;

  printf("In octal, your number is: %d%d%d%d%d\n",first,second,third,
    fourth,fifth);

  return 0;
}