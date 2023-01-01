#include<stdio.h>

int Addition(int iValue1, int iValue2)
 {
    int iRet=0;
    iRet = iValue1 + iValue2 ;
    return iRet;
 }


int main()
{
    int iNo1 = 0, iNo2 = 0, iAns = 0;
    printf("Enter first Number :\n");
    scanf("%d",&iNo1);
    printf("Enter second Number :\n");
    scanf("%d",&iNo2);

    iAns = Addition(iNo1,iNo2);
    printf("Addition of Two Number=%d\n",iAns);

    return 0;
}