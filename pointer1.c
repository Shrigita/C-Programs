#include<stdio.h>

int main()
{
     int no = 10;
     
     int *p = NULL;
      p = &no;

     printf("%d\n",no);
     printf("%d\n",*p);
     printf("%d\n",&no);
     printf("%d\n",&p);
     printf("%d\n",sizeof(no));
     printf("%d\n",sizeof(p));

     *p = 11;
     printf("%d\n",no);
     printf("%d\n",*p);
    return 0;
}