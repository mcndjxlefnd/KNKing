/*Exercise 3 Chapter 5*/
#include <stdio.h>
int main(void)
{
  int i, j, k;

  i=3;j=4;k=5;
  printf("\na. %d\n", i < j || ++j < k);	/*1*/
  printf("	%d	%d	%d\n",i,j,k);		/*3,4,5*/

  i=7;j=8;k=9;
  printf("\nb. %d\n", i - 7 && j++ < k);	/*0*/
  printf("	%d	%d	%d\n",i,j,k);		/*7,8,9*/

  i=7;j=8;k=9;
  printf("\nc. %d\n", (i = j) || (j = k));	/*1*/
  printf("	%d	%d	%d\n",i,j,k);		/*8,8,9*/

  i=1;j=1;k=1;
  printf("\nd. %d\n", ++i || ++j && ++k);	/*1*/
  printf("	%d	%d	%d\n\n",i,j,k);		/*2,1,1*/

  return 0;
}