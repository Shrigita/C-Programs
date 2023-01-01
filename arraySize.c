#include<stdio.h>

int main()
{
     int arr[5]={10,20,30,40,50};

     printf("Base address of array: %p\n",arr);
     printf("size of array: %d\n",sizeof(arr));
     printf("Base address of array: %p\n",&arr);

    return 0;

}
