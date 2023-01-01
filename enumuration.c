#include<stdio.h>

enum days{Monday,Tuesday,Wensday,Thursday,Friday,Saturday,Sunday};

int main()
{ 
    enum days obj1;
    printf("size of enum %d\n",sizeof(obj1));

    printf("Monday : %d",Monday);
    printf("Tuesday : %d",Tuesday);
    printf("Wensday : %d",Wensday);
    printf("Thursday : %d",Thursday);
    printf("Friday : %d",Friday);
    printf("Saturday : %d",Saturday);  
    
    return 0;
}