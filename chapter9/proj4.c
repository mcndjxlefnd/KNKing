#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

void read_word(int word[26]);

bool equal_array(int word1[26], int word2[26]);

int main(void)
{
	
	int word1[26]={0},word2[26]={0};

	printf("Enter first word: ");

	read_word(word1);

	printf("Enter second word: ");

	read_word(word2);
	
	if (equal_array(word1,word2))
	printf("The words are anagrams.\n");
	else printf("The words are not anagrams.\n");

	return 0;
}

void read_word(int word[26])
{
	char ch;

	while ((ch=getchar())!='\n')
	{
		ch=toupper(ch);
		
		if (isalpha(ch))
			word[ch-65]+=1;
	}
}

bool equal_array(int worda[26],int wordb[26])
{
	int i;
	bool ana=true;

	for(i=0;i<26;i++)
	{
		if(worda[i]!=wordb[i])
		{
			ana=false;
			break;
		}	
	}

	if (ana)
		return true;
	else return false;
}

