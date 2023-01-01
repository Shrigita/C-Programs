#include<stdio.h>

 extern int No1;
 extern int No2;

 extern void Demo();

 int main()
 {
     Demo();

   printf("value of No1%d\n",No1);
   printf("value of No2%d\n",No2);

   return 0;
 }

