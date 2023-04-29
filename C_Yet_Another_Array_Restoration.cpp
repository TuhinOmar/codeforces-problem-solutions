#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    int n,x,y;cin>>n>>x>>y;
    int a=(n-1);
    while((y-x)%a!=0){
        --a;
    }
    a=(y-x)/a;
    int b=y-(n-1)*a;
    while(b<=0){
        b+=a;
    }
    for(int i=0;i<n;++i){
        cout<<b<<" ";
        b+=a;
    }
    cout<<endl;
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