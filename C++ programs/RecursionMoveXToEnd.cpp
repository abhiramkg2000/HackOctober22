#include<bits/stdc++.h>
#include <string>
using namespace std;

string MoveallX(string s)
{
    if(s.length()==0)
    {
        return "";
    }

    char ch=s[0];
    string ans = MoveallX(s.substr(1));

    if(ch=='x')
    {
        return ans+ch;
    }
    else
    return ch+ans;
}

int main()
{
    cout<<MoveallX("tyyuxxxxgtqeyxxxxssxxsxaxsxxdxfxfexexrrxtxhxdfxdexrtxfx")<<endl;
       
}
