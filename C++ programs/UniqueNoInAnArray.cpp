//write a program to find a unique number in an array where all numbers except one is present twice.

#include <bits/stdc++.h>
using namespace std;


int unique(int arr[], int n)
{
    int xorsum =0;
    for(int i=0; i<n;i++)
    {
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}

int main()
{
    int arr[] ={1,2,5,8,4,5,2,1,8};
    cout<<unique(arr,9)<<endl;

    return 0;

}