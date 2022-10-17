#include<stdio.h>
void main()
{
	int a;
	printf("enter the year:");
	scanf("%d",&a);

	if((a%4==0)&&(a%100!=0)||(a/400==0))
	{
		printf("it is an leap year\n");
	}
	else
	
		printf("it is not an leap year");
	
}
