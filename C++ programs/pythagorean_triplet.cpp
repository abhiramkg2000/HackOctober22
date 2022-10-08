# include <bits/stdc++.h>
# include <math.h>
using namespace std;

bool check(int n1, int n2, int n3){
    int a,b,c;
    a= max(n1,max(n2,n3));
    
    if(a==n1){
         b=n2;
         c=n3;
    }
    else if(a==n2){
         b=n1;
         c=n3;
    }
    else{
         b=n1;
         c=n2;
    }

    if((a*a)==(b*b)+(c*c)){
        return true;
    }
    else{
        return false;
    }
}


int main(){

    int x, y,z;
    cin>>x>>y>>z;
    
    if(check(x,y,z)){
        cout<<"Pythagorean Triplet";
    }
    else{
        cout<<"Not Pythagorean Triplet";
    }
}