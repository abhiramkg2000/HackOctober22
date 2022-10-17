/*
Given an N bit binary number, find the 1's complement of the number. 
The ones' complement of a binary number is defined as the value obtained by inverting all the bits in the binary representation of the number 
(swapping 0s for 1s and vice versa).


Example:

Input:
N = 3
S = 101

Output:
010
Explanation:
We get the output by converting 1's in S
to 0 and 0s to 1

*/ 

#include<bits/stdc++.h>
using namespace std; 
  
class Solution{ 
public:
    string onesComplement(string S,int N){
      
        for(int i=0;i<N;i++){
            S[i]^=1;
        }
        return S;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.onesComplement(s,n)<<"\n";
    }
} 
