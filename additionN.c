//Accept N Number from user and perform the addition

//Input
//Value of N = 5
//Valuse : 10 20 30 40 50

//Output
//Addition is : 150

//Algorithm
/*
   START
      Accept the number of element from user
      Allocate the memory to store that numbers
      Accept the number from user
      perform addition of all number
      Display the Addition

   END
*/

/////////////////////////////////////////////////////////
// 
#include<stdio.h>
#include<stdlib.h>   //for malloc and free function


int main()
{
    int *Arr = NULL;    //pointer to hold the addres of array
    int iSize = 0;      //Variable to hold size of array
    int i = 0;          //Loop Counter
    int isum = 0;      // To hold the Addition

    printf("Please enter how many element you want to use");
    scanf("%d",&iSize);

    //Allocate the memory
    Arr = (int *)malloc(iSize * sizeof(int));
    printf("Memory allocation is Successfully\n");

    printf("Please Enter the Element\n");
   
    for(i = 0 ; i < iSize ; i++)
    {
       scanf("%d",&Arr[i]);
    }
     //Perform addition
     for(i = 0 ; i < iSize ; i++)
     {
        isum = isum + Arr[i];
     }
     printf("Addition is %d :",isum);
      //Free the memory
     free(Arr);
    return 0;
}