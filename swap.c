#include<stdio.h>

void swap(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
void main()
{
    int a=0,b=0;
    printf("Enter the two numbers to be swapped:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    swap(&a,&b);
    printf("The numbers after swapped are:\n");
    printf("a=%d\tb=%d",a,b);
}
