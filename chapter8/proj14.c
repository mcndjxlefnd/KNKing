#include<stdio.h>
int main(void)
{
	char sentence[200]={0},ch;
	int i,n=0,term,nw[20]={0};

	printf("Enter a sentence: ");	
    
	for(i=0;(ch=getchar())!='\n';i++)
	    {
		    if(ch==' ')
		    {
			    n++;
			    nw[n]=i+1;
			    
		    }

		    else
			    sentence[i]=ch;
		    
	    }
	    term=i-1;
	    nw[n+1]=term;

	    
	    while(n>=0)
	    {

		    for(i=nw[n];i<(nw[n+1]);i++)	
		    {
			    putchar(sentence[i]);
		    }

		    if(n>0)
			    putchar(' ');
		    n--;

	    }

	    putchar(sentence[term]);
	    putchar('\n');
	return 0;
}
