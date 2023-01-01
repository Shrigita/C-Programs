#include<stdio.h>

struct Demo1
{
    int i;
    float f;
    char ch;
    int j;
};

union Demo2
{
    int i;
    float f;
    char ch;
    double d;
};

int main()
{
    struct Demo1 obj1;
    union Demo2 obj2;
    printf("Size of structure: %d \n",sizeof(obj1));
    printf("Size of union: %d \n",sizeof(obj2));
    return 0;
}