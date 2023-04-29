#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    lli n;cin>>n;
    lli ans=0;
    unordered_map<lli,lli>ump;
    for(lli i=0;i<n;++i){
        lli x;
        cin>>x;
        ++ump[x-(i+1)];
    }
    for(auto i:ump){
        ans+=(i.second*(i.second-1)/2);
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