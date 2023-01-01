#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
  if((iNo % 2)  == 0)
  {
    return true;
  }
  else
  {
     return false;
  }

}


int main()
{
    int iValue = 0;
     bool bRet;  // bRet = false;
    printf("Enter the One Number:");
    scanf("%d",&iValue);
    
     bRet = CheckEven(iValue);

    if(bRet == true)
    {
     printf("Number is Even\n");
    }
    else
    {
       printf("Number is odd\n");
    }

    return 0;
}