#include<iostream>
using namespace std;

void AntiSpiral(int A[][100],int r,int c)
{
    int startRow=0;
    int endRow=r-1;
    int startCol=0;
    int endCol=c-1;

    while(startRow<=endRow && startCol<=endCol)
    {
        for(int i=startRow;i<=endRow;i++)
        {
            cout<<A[i][startCol]<<", ";
        }
        startCol++;

        for(int i=startCol;i<=endCol;i++)
        {
            cout<<A[endRow][i]<<", ";
        }
        endRow--;

        for(int i=endRow;i>=startRow;i--)
        {
            cout<<A[i][endCol]<<", ";
        }
        endCol--;

        for(int i=endCol;i>=startCol;i--)
        {
            cout<<A[startRow][i]<<", ";
        }
        startRow++;
    }
	cout<<"END";
}

int main()
{
    int row=0,col=0;
    cin>>row>>col;
    
    int A[100][100]={0};
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>A[i][j];
        }
    }

    AntiSpiral(A,row,col);
}