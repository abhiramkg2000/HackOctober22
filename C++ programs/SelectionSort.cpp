/*C++ Programme for the selection sort*/
#include<bits/stdc++.h>
using namespace std;

void SelectSort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int minidx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minidx])
            minidx=j;
        }
        swap(arr[minidx], arr[i]);
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

    SelectSort(arr, n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

}