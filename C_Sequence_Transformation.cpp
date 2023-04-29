#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(auto&i:v)cin>>i;
    vector<int>res(n+1,1);
    n=unique(v.begin(),v.end())-v.begin();
    //vet(v);
    v.resize(n);
    for(int i=0;i<n;++i){
        res[v[i]]+=1;
    }
    res[v[0]]-=1;
    res[v[n-1]]-=1;
    int ans=1e9;
    for(int i=0;i<n;++i){
        ans=min(ans,res[v[i]]);
    }
    cout<<ans<<endl;
}

int32_t main(){
    IOS;
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    
    
    int t;cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}