#include<stdio.h>
void swap(int *p,int *q);
void main()
{
int p,q;
printf("Enter a number p=");
scanf("%d",&p);
printf("\nEnter a number q=");
scanf("%d",&q);
swap(&p,&q);
}
void swap(int *p,int *q)
{
int temp;
temp=*p;
*p=*q;
*q=temp;
printf("\nP=%d and Q=%d\n",*p,*q);
}
