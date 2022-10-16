#include<stdio.h>

void quicksort(int nums[],int low, int high)
{
    if(low>=high)
    {
        return;
    }
    int start=low;
    int end=high;
    int mid=(start+end)/2;
    int pivot=nums[mid];
    while(start<=end)
    {
        while(nums[start]<pivot)
        {
            start++;
        }
        while(nums[end]>pivot)
        {
            end--;
        }
        if(start<=end)
        {
            int temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            start++;
            end--;
        }
    }
    quicksort(nums,low,end);
    quicksort(nums,start,high);
}

int main()
{
    int n;
    scanf("%d",&n);
    int nums[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    quicksort(nums,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d\n",nums[i]);
    }
 
}