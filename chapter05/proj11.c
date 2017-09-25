#include <stdio.h>
int main (void)
{
  int ten,one;

  printf("Enter a two-digit number: ");
  scanf("%1d%1d",&ten,&one);

  printf("You entered the number ");

  switch (ten)
  {
    case 9:	printf("ninety");	break;
    case 8:	printf("eighty");	break;
    case 7:	printf("seventy");	break;
    case 6:	printf("sixty");	break;
    case 5:	printf("fifty");	break;
    case 4:	printf("forty");	break;
    case 3:	printf("thirty");	break;
    case 2:	printf("twenty");	break;
    case 1:
    if (one>2)
     {
      switch (one)
      {
	case 9:	printf("nine");		break;
	case 8:	printf("eight");	break;
	case 7:	printf("seven");	break;
	case 6:	printf("six");		break;
	case 5:	printf("fif");		break;
	case 4:	printf("four");		break;
	case 3:	printf("thir");		break;
      }
      printf("teen\n");
     }
    else switch (one)
      {
	case 2:	printf("twelve.\n");	break;
	case 1:	printf("eleven.\n");	break;
	case 0: printf("ten.\n");	break;
      }
  }
  if (ten>1)
    switch (one)
    {
      case 9:	printf("-nine.\n");	break;
      case 8:	printf("-eight.\n");	break;
      case 7:	printf("-seven.\n");	break;
      case 6:	printf("-six.\n");	break;
      case 5:	printf("-six.\n");	break;
      case 4:	printf("-four.\n");	break;
      case 3:	printf("-three.\n");	break;
      case 2:	printf("-two.\n");	break;
      case 1:	printf("-one.\n");	break;
      case 0:	printf(".\n");		break;
    }
return 0;
}