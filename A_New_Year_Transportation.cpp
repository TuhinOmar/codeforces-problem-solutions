#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    int n,t;cin>>n>>t;
    vector<int>v(n-1);
    for(auto&i:v)cin>>i;
    int pos=0+v[0];
    while(pos<t-1){
        pos=(pos+v[pos]);
    }
    cout<<((pos==t-1)?"YES":"NO");
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