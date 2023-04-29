#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    int n,m;cin>>n>>m;
    vector<int>a(m);
    for(auto&i:a)cin>>i;
    sort(a.begin(),a.end());
    int lowestDiff = INT_MAX;
    for(int l=0;l<m-n+1;++l){
        int r=l+n-1;
        if(a[r]-a[l]<lowestDiff){
            lowestDiff=a[r]-a[l];
        }
    }
    cout<<lowestDiff;
}

int32_t main(){
    IOS;
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    
    
    // int t;cin>>t;
    // while(t--){
        solve();
    // }
    
    return 0;
}