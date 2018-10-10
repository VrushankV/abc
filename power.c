#include<stdio.h>
void main()
{
 int *ptr1,*ptr2,x=10,y=15,s;
 ptr1 = &x;
 ptr2 = &ptr1;
 printf("x=%d,y=%d",*ptr1,*ptr2);
}

