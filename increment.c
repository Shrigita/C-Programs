#include<stdio.h>

int main()
{
  int no=10;
  int x=0;
  int y=0;

  x= no++;
  printf("%d\n",x);
  printf("%d\n",no);

  y=++no;
  printf("%d\n",y);
  printf("%d\n",no);

  x= no--;
  printf("%d\n",x);
  printf("%d\n",no);

  y=--no;
  printf("%d\n",y);
  printf("%d\n",no);


  return 0;

}