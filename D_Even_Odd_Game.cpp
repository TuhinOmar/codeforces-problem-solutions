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
    lli sA=0, sB=0;
    sort(a.rbegin(),a.rend());
    for(int i=0;i<n;++i){
        if(i&1){
            if(a[i]%2)sB+=a[i];
        }else{
            if(!(a[i]%2))sA+=a[i];
        }
    }
    cout<<(sA>sB?"Alice":sB>sA?"Bob":"Tie")<<endl;
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