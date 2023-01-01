#include<stdio.h>
int main()
{
   int i=1,j=1,l;
   l=(i&&++j)||j++;
   printf("%d%d%d",i,j,l);
 }
