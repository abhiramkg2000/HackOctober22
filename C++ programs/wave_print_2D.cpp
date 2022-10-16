#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<" Enter the ROW : ";
    cin>>row;
    cout << " Enter the Col : ";
    cin>>col;

    int A[row][col] = {0};

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>A[i][j];
        }
        cout<<endl;
    }

    cout<<"Normal Form  !!"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    
    cout<<"In Form Of Wave  !!"<<endl;
    for(int i=0;i<col;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<row;j++)
            {
                cout<<A[j][i]<<" ";
            }
        }
        else
        {
            for(int j=row-1;j>=0;j--)
            {
                cout<<A[j][i]<<" ";
            }
        }
    }
    return 0;
}
