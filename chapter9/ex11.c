#include<stdio.h>
#include<ctype.h>
	
int n=6;
char grades[6]={'a','b','a','b','a','b'};

float compute_GPA(char grades[], int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		grades[i]=toupper(grades[i]);
		
		switch (grades[i])
		{
			case 'A': sum+=4;	break;
			case 'B': sum+=3;	break;
			case 'C': sum+=2;	break;
			case 'D': sum+=1;	break;
			case 'F': break;
		}
	}

	return (float)sum/i;

}

int main(void)
{

	printf("GPA is %.3f\n", compute_GPA(grades,n));

	return 0;
}

