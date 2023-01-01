#include<stdio.h>

int main()
{
    char ch='A';
    int i=11;
    float f =3.14;
    double d=9.567;

    printf("value of variable");
    printf("%c\n",ch);
    printf("%d\n",i);
    printf("%f\n",f);
    printf("%lf\n",d);

    printf("Size od each variable");
    printf("size of character:%d\n",sizeof(ch));
    printf("size of integer:%d\n",sizeof(i));
    printf("size of float:%d\n",sizeof(f)); 
    printf("size of double:%d\n",sizeof(d)); 

    printf("Address of each variables\n");
    printf("Adress of ch:%d\n",&ch);
     printf("Adress of i:%d\n",&i);
      printf("Adress of f:%d\n",&f);
       printf("Adress of d:%d\n",&d);
    return 0;
}