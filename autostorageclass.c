#include<stdio.h>

void fun(int I)
{
    auto int i;
    auto int j=10;
   
     printf("%d\n",i);
    printf("%d\n",j);
}
int main()
{
    fun(10);
    fun(20);

    return 0;
}
