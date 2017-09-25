#include <stdio.h>
int main(void)
{
  int grade;

  printf("Enter numerical grade out of 100: ");
  scanf("%d",&grade);
  
  

  if (grade>100 || grade>100)
    printf("Illegal grade\n");
  else 
  { 
    printf("Letter grade: ");

  switch (grade/10)
  {
    case (10):printf("A+\n");	break;
    case (9): printf("A\n");	break;
    case (8): printf("B\n");	break;
    case (7): printf("C\n");	break;
    case (6): printf("D\n");	break;
    case (5): printf("F\n");	break;
    case (4): printf("F\n");	break;
    case (3): printf("F\n");	break;
    case (2): printf("F\n");	break;
    case (1): printf("F\n");	break;
    case (0): printf("F\n");	break;
  }
  }
  return 0;
}