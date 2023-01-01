#include<stdio.h>

#pragma pack(1)
struct Demo
{
   int i;
   char ch1;
   float f;
   char ch;
   float d;

};
int main()
{
    struct Demo obj1;
    printf("Size of structure:%d\n",sizeof(obj1));
    

   return 0;
}