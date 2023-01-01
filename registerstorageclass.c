#include<stdio.h>

void fun()
{
    register int i;
    register double d=2.222;
    printf("%d\n",i);
    printf("%lf\n",d);

}
void gun()
{
    register int i;
    for(i=10;i>=0;--i)
    {
        printf("%d\n",i);

    }
}
int main()
{
    fun();
    gun();
    return 0;
}