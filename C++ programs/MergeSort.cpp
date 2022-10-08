/*C++ Programme for the merge sort*/
#include<bits/stdc++.h>
using namespace std;

void Merge(int a[], int low, int mid, int high)
{
    int n1=mid-low+1, n2=high-mid;
    int left[n1], right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=a[low+i];
    }
    for(int i=0;i<n2;i++)
    {
        right[i]=a[mid+1-1];
    }

    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            a[k]=left[i];
            i++;j++;
        }
        else
        {
            a[k]=right[j];
            k++;j++;
        }
    }
    while(i<n1)
    {
        a[k]=left[i];
        i++;k++;
    }
    while(j<n2)
    {
        a[k]=right[j];
        j++;k++;
    }

}

void MergeSort(int arr[], int l, int r)
{
    if(r>l)
    {
        int m= l + (r-l)/2;
        MergeSort(arr, l ,m);
        MergeSort(arr, m+1, r);
        Merge(arr,l,m,r);

    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    MergeSort(arr, 0, n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

}