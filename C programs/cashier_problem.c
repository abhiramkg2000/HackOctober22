#include<stdio.h>
main()
{
	int a,b,c,d,e,f,x;
	printf("enter the value of x:");
	scanf("%d",&x);
	
    if(x<10000)
    {
       a=x/1000;
	   printf("Number of 1000 notes are:%d\n",a);
	   b=x%1000;
	   c=b/100;
	   printf("Number of 100 notes are:%d\n",c);
	   d=b%100;
	   e=d/10;
	   printf("Number of 10 notes are:%d\n",e);
	   f=d%10;
	   printf("Number of 1 rs coins are:%d\n",f);
    }
}
