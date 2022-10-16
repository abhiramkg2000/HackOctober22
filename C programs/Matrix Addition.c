#include <stdio.h>
main()
{
	int a[100][100],b[100][100],d[100][100],i,j,r,c;
	printf("enter the no. row :");
	scanf("%d",&r);
	printf("\nenter the no. of coloumn :");
	scanf("%d",&c);
	for(i=0;i<=r;i++)
	  {for(j=0;j<=c;j++)
	    scanf("\n%d\n",&a[i][j]);
	 }
	 printf("\n");
	
	    	for(i=0;i<=r;i++)
	  {for(j=0;j<=c;j++)
	    scanf("\n%d\n",&b[i][j]);
	}
	printf("\n");
	
	 for(i=0;i<=r;i++)
	   for(j=0;j<=c;j++)
	        	d[i][j]=a[i][j]+b[i][j];
	        	for(i=0;i<=r;i++)
	        	{
	        		printf("\n");
	        		for(j=0;j<=c;j++)
                     printf("the add of two matrix is %d \n",d[i][j]);
				}
			
		}
