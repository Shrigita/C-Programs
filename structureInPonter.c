#include<stdio.h>

struct Employee
{
    int iEno;
    float f;
    struct Employee *next;
};

int main()
{
    struct Employee obj1;
    struct Employee obj2;
    struct Employee obj3;
      
    obj1.iEno = 11;
    obj2.iEno = 21;
    obj3.iEno = 51;

    obj1.next = &obj2;
    obj2.next = &obj3;
    obj3.next = NULL;

    printf("size=%d\n",sizeof(obj1));
    printf("%d\n",obj1.iEno);
    printf("%d\n",obj2.iEno);
    printf("%d\n",obj3.iEno);
    printf("%d\n",obj1.next);
    printf("%d\n",obj2.next);
    printf("%d\n",obj3.next);
    return 0;
}