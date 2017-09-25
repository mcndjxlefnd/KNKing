#include<stdio.h>
int main (void)
{
  int i,j,k;
  
  i=1;
  printf("a. %d, i -> ",i++ -1); /* prints 0 and increments i to 2*/
  printf("%d\n", i); /*prints 2*/
  
  i=10;j=5;
  printf("b. %d, ", i++ - ++j); /*prints 4*/
  printf("i->%d, j->%d\n",i,j); /*prints 11, 6*/
  
  i=7;j=8;
  printf("c. %d, ", i++ - --j); /*prints 0*/
  printf("i->%d, j->%d\n",i,j); /*prints 8, 7*/
  
  i=3;j=4;k=5;
  printf("d. %d, ",i++ - j++ + --k); /*prints 3*/
  printf("i->%d, j->%d, k->%d\n",i,j,k); /*prints 4, 5, 4*/
  
  return 0;
}