#include<stdio.h>
#include<ctype.h>
int main(void)
{
	
	int i,ch,word1[26]={0},word2[26]={0};

	printf("Enter first word: ");

	while ((ch=getchar())!='\n')
	{
		ch=toupper(ch);
		
		if (isalpha(ch))
			word1[ch-65]+=1;
	}

	printf("Enter second word: ");

	while ((ch=getchar())!='\n')
	{
		ch=toupper(ch);
		
		if (isalpha(ch))
			word2[ch-65]+=1;
	}
	
	for(i=0;i<26;i++)
	{
		printf("%d",i);
		if(word1[i]!=word2[i])
			{
				printf("The words are not anagrams.\n");
				goto end;
			}
	}

	printf("The words are anagrams.\n");
	
end:

	return 0;
}
