#include<stdio.h>

int main()
{
    int arr[] ={10,20,30};

    void *vp = &arr[0];
  //  printf("%d\n",(int *)*vp);
      printf("%d\n",(int *)vp);
      printf("%d\n",(int *)(vp + 1));
      printf("%d\n",(int *)(vp + 2));
        printf("%d\n",(int *)(vp + 3));
          printf("%d\n",(int *)(vp + 4));
            printf("%d\n",(int *)(vp + 5));
     return 0;
}