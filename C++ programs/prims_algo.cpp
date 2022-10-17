/* code by som #2nd year cse at IIIT - Pune */

/* PRIM'S ALGORITHM */ 
/* used to find minimum spanning tree with v-1 edges and v nodes where v are the number of nodes in original
graph */
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define Mod 1000000007 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32; /*   vector<int>   */
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
#define ull unsigned long long
#define f(i,e) for(ll i = 0; i < e; i++)
#define fs(i,s,e) for(ll i = s; i < e; i++)
#define fr(i,s) for(ll i = s; i >= 0; i--)
#define frs(i,s,e) for(ll i = s; i >= e; i--)
#define nl "\n"
#define INF 9999

#define sz(x) ((ll)(x).size())

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
/* code for minimum spanning Tree using prims algorithm */
vector<vector<int>> vec ={
            {INF, INF, INF, INF, INF, INF, INF, INF},
            {INF, INF, 25, INF, INF, INF, 5, INF},
            {INF, 25, INF, 12, INF, INF, INF, 10},
            {INF, INF, 12, INF, 8, INF, INF, INF},
            {INF, INF, INF, 8, INF, 16, INF, 14},
            {INF, INF, INF, INF, 16, INF, 20, 18},
            {INF, 5, INF, INF, INF, 20, INF, INF},
            {INF, INF, 10, INF, 14, 18, INF, INF},
    };
int u , v;
int min = INT_MAX;
f(i,sz(vec)){
    fs(k,i,sz(vec)){
       if(vec[i][k]<min){
         u = i ; v= k ;
         min = vec[i][k];
       }
    }
}
   cout<<"Min edge is : "<<u<<" "<<v<<nl;
   cout<<"Min spanning Tree is :- "<<nl;
   f(i,2)cout<<nl;
   f(i,10)cout<<'*';
    f(i,2)cout<<nl;
int t[2][6];
int near[8] ;
f(i,7)near[i]=INF;
t[0][0] = u ; t[1][0] = v; 
near[u] = 0 ; near[v] = 0; 

int github ;

for(int i = 1 ; i<=7 ; i++){
    if(near[i]==0)continue;
else if(near[i]!=0 and vec[i][u]<vec[i][v])near[i] = u;
else near[i]=v;}
//fs(i,1,7)cout<<near[i]<<" ";
for(int i = 1 ;i<6;i++){
    min = INF;
    for(int k = 1; k<=7 ; k++){
          if(near[k]==0)continue;
       else if(near[k]!=0 and vec[k][near[k]]<min){
            min = vec[k][near[k]];
            github = k;
        }
    }
   
    
    t[0][i]=github;
    t[1][i]=near[github];
     near[github] = 0;
    for(int k = 1 ; k<=7 ; k++){
          if(near[k]==0)continue;
        else if(near[k]!=0 and vec[k][github]<vec[k][near[k]]){
            near[k] = github;
        }
    }

}
for(int i = 0 ; i<6 ; i++){
    cout<<t[0][i]<<" "<<t[1][i]<<nl;
}
return 0;}




