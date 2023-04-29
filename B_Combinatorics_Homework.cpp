#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    int a,b,c,m;
    cin>>a>>b>>c>>m;
    vector<int>v{a,b,c};
    sort(v.begin(),v.end());
    int mx=a+b+c-3;
    int mn=v[2]-v[1]-v[0]-1;
    if(m>mx||m<mn)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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