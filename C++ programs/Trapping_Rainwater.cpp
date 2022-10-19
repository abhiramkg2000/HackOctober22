
#include<bits/stdc++.h>
using namespace std;
class Solution{
    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        long i,sum=0;
        int *left = new int[n];
        int *right= new int[n];
        left[0] = arr[0];
        for(i=1;i<n;i++)
        {
            left[i] = std::max(left[i-1],arr[i]);
            
        }
        right[n-1]=arr[n-1];
        for(i=n-2;i>=0;i--)
         {   right[i] = std::max(right[i+1],arr[i]); }
        for(i=0;i<n;i++)
       { sum+=(std::min(left[i],right[i])-arr[i]) ; }
        return sum;
    }
};
int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
    }
    return 0;
}  