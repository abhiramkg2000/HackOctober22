# include <bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int a[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    //this can be used if matrix is given and we have not to take the input
    /*  for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }*/

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;



}