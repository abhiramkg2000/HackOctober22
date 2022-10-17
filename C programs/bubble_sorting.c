#include <stdio.h>
main()
{
	int a[100],n,intial=0,final=n-1,i,temp,j;
	printf("enter the value size :");
	scanf("%d",&n);
	printf("\n enter the elements of arrays:\n");
	for(i=0;i<n;i++)
	{printf("a[%d]=",i);
	scanf("%d",&a[i]);}
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	
	
	for(i=n-1;i>0;i--)
	{
		for(j=0;j<=i;j++)
		{
			if(a[j]>a[j+1])
			{temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		}
   }
   printf("sorted array in asscending order:\n");
		for(i=0;i<n;i++)
		{
		printf("\n");
		printf("a[%d]=%d\n",i,a[i]);	
       }
    printf("\nsorted array in desscending :\n");
      for(i=n;i>0;i--)
      {
      	printf("\n");
      	printf("a[%d]=%d",i,a[i]);
	  }
}
