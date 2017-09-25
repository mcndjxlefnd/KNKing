/* Exercise 1 Chapter 5*/
#include <stdio.h>
int main(void)
{
  int i,j,k;
  
  i=2;j=3;
  k=i*j==6;
  printf("\na. %d\n\n",k);	/*1*/

  i=5;j=10;k=1;
  printf("b. %d\n\n",k>i<j);	/*1*/

  i=3;j=2;k=1;
  printf("c. %d\n\n",i<j==j<k);	/*1*/

  i=3;j=4;k=5;
  printf("d. %d\n\n",i%j+i<k);	/*0*/	/* 3 % 4 = 3*/

  return 0;
}