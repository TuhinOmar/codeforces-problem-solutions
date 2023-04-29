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
    vector<int>a(n);
    for(auto&i:a)cin>>i;
    unordered_map<int,int>ind;
    int res=0;
    for(int i=0,j=0;i<n;++i){
        j=max(ind[a[i]],j);
        res=max(i-j+1,res);
        ind[a[i]]=i+1;
    }
    cout<<res;
}

int32_t main(){
    IOS;
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    
    // int t;cin>>t;
    // while(t--){
    solve();
    // }
    
    return 0;
}