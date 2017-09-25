#include <stdio.h>
int main(void)
{
	int ch,i;
	char alpha[15];

	
	printf("Enter phone number: \n");
	
	for(i=0;(ch=getchar())!='\n';i++)
		alpha[i]=ch;

	
	
	for(i=0;i<15;i++)
	{		
		ch=alpha[i];
		
		switch (ch)
		{
		case 'A':	case 'B':	case 'C':
			putchar('2');
			break;
		case 'D':	case 'E':	case 'F':
			putchar('3');
			break;
		case 'G':	case 'H':	case 'I':
			putchar('4');
			break;
		case 'J':	case 'K':	case 'L':
			putchar('5');
			break;
		case 'M':	case 'N':	case 'O':
			putchar('6');
			break;
		case 'P':	case 'Q':	case 'R':	case 'S':
			putchar('7');
			break;
		case 'T':	case 'U':	case 'V':
			putchar('8');
			break;
		case 'W':	case 'X':	case 'Y':	case 'Z':
			putchar('9');
			break;
		default:
			putchar(ch);
		
		}
	}

	putchar('\n');

return 0;
}
