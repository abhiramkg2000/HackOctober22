// It will fail becoz of the O(n) --> Space Complexity

#include<iostream>
#include<vector>
using namespace std;

void solve(int currIndex,int k,vector<int> v,int &ans)
{
   if(v.size()==1)
   {
      ans=v[0];
      return;
   }

   currIndex=(currIndex+k)%v.size();
   v.erase(v.begin()+currIndex);

   solve(currIndex,k,v,ans); 
}

int main()
{
    int n=0,k=0;
    cin>>n>>k;

    vector<int> v;
    for(int i=1;i<=n;i++) v.push_back(i);
    int ans=0;
    solve(0,k-1,v,ans);
    cout<<ans;
    return 0;
}