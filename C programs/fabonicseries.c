#include <stdio.h>
main()
{
	int a=0,b=1,sum,n,i;
	printf("enter the value for which you wants fabonic series:");
	scanf("%d",&n);
	printf("the fabonic series of %d are:\n",n);
	for(i=0;i<n;i++)
	{
		if(i<=1)
		{
		   sum=i;
        }
        else
        {
        	sum=a+b;
        	a=b;
        	b=sum;
		}
		printf("%d\n",sum);
	}
}
