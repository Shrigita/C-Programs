#include<stdio.h>

struct Hello
{
   int i;
   float j;

};
int main()
 {
    struct Hello obj;
    struct Hello *ptr = &obj;

    obj.i = 10;
    ptr->j = 20.20;

    printf("size of Hello %d \n",sizeof(obj));
    printf("obi.i %d",obj.i);
    printf("ptr->j %f",ptr->j);
    return 0;

 }
