# include <bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin>>n;

    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int mini = *min_element(a.begin(),a.end());

    int ans = mini*n;

    for(int i=0;i<n;i++){
        if(a[i]>mini)
            ans++;
    }

    cout<<ans<<endl;

}

int main(){
    int t;
    cin>>t;

    while(t--){

        solve();
    }
}