#include<stdio.h>

void Demo()
{
    auto int A=10;
    A++;   //increment the value by 1
    printf("value from Demo:%d\n",A);
}
void Hello()
{
    static int B=10;
    B++;   //increment the value by 1
    printf("value from Hello:%d\n",B);
}

int main()
{
    Demo();
    Demo();
    Demo();

    Hello();
    Hello();
    Hello();
    return 0;
}
