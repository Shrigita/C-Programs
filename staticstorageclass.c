#include<stdio.h>

int fun()
{
    static int i=10;
    ++i;
    printf("fun value of i%d\n",i);
}
int gun()
{
    static int i=5;
    --i;
    if(i!=0)
    {
        printf("gun value of i %d\n",i);
        gun();
    }

}
int main()
{
    fun();
    fun();
    fun();

    gun();
    return 0;

}