/* Transcribed from the book */

#include <stdio.h>

int main (void)
{
  	int num1,denom1,num2,denom2,result_num,result_denom,ch,i;
  
  	printf("Enter two fractions separated by a binary arithmetic operator:\n");
  	scanf("%d / %d",&num1,&denom1);
	
	while ((ch=getchar())==' ');

	switch (ch)
	{	
		case '+':
			scanf("%d / %d",&num2,&denom2);
  			result_num=num1*denom2+num2*denom1;
  			result_denom=denom1*denom2;
			break;
		case '-':
			scanf("%d / %d",&num2,&denom2);
			result_num=num1*denom2-num2*denom1;
			result_denom=denom1*denom2;
			break;
		case '*':
			scanf("%d / %d",&num2,&denom2);
			result_num=num1*num2;
			result_denom=denom1*denom2;
			break;
		case '/':
			scanf("%d / %d",&num2,&denom2);
			result_num=num1*denom2;
			result_denom=denom1*num2;
			break;
	}
for (i=0;i<12;i++)
{
	if (result_num%2==0&&result_denom%2==0)
	{
		result_num/=2;result_denom/=2;
	}
	if (result_num%3==0&&result_denom%3==0)
	{
		result_num/=3;result_denom/=3;
	}
	if (result_num%5==0&&result_denom%5==0)
	{
		result_num/=5;result_denom/=5;
	}
	if (result_num%7==0&&result_denom%7==0)
	{
		result_num/=7;result_denom/=7;
	}
}

	printf("the result is %d/%d\n", result_num, result_denom);

	return 0;
}
