#include<stdio.h>

struct Demo1
{
    int A;
    int B;

};
struct Demo2
{
    int C;
    int D;
    struct Demo1 obj;

};

int main()
    {
       struct Demo2 obj2;
       struct Demo1 obj3;
       printf("size of demo2=%d\n",sizeof(obj2));
        printf("size of demo1=%d\n",sizeof(obj3));
      return 0;
    }
