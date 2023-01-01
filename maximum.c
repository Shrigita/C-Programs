#include<stdio.h>

int main()
{
    int Num1 , Num2;
    printf("Enter First Number :");
    scanf("%d",&Num1);
    printf("Enter Second Number :");
    scanf("%d",&Num2);

    if(Num1 > Num2)
    {
        printf("Maximum Number %d =",Num1);
    }
    else if(Num1 < Num2)
    {
        printf("Maximum Number %d=",Num2);
    }
    else
    {
        printf("Both are Equal..");
    }
    return 0;

 }

