#include<stdio.h>

int main()
{
    int arr[3]={21,43,54};
    int x=0;

    x=arr[2] + 21 + arr[0];
    x++;

    printf("%d\n",x);

    int drr[3+2]={7+9, 3*2, 78, 9-1};

    printf("Array of 0%d",drr[0]);
    printf("Array of 1%d",drr[1]);
    printf("Array of 2%d",drr[2]);
    printf("Array of 3%d",drr[3]);
    printf("Array of 4%d",drr[4]);

    

    return 0;
}