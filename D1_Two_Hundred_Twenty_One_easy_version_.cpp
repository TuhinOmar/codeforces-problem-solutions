#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

int n,q,l,r;
string s;
vector<int>sum(300005,0);

void solve(){
    cin>>n>>q>>s;
    for(int i=0;i<n;++i){
        sum[i+1]=sum[i]+((i&1)?-1:1)*((s[i]=='+')?1:-1);
    }
    while(q--){
        cin>>l>>r;
        if(sum[r]-sum[l-1]==0)cout<<0<<endl;
        else if((r-l+1)&1)cout<<1<<endl;
        else cout<<2<<endl;
    }
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