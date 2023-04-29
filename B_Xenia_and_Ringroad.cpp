#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    lli n,m;cin>>n>>m;
    vector<int>v(m);
    for(auto&i:v)cin>>i;
    lli cur=v[0];
    lli cnt=v[0]-1;
    for(lli i=1;i<m;++i){
        if(v[i]>=v[i-1]){
            cnt+=v[i]-v[i-1];
        }else{
            cnt+=(n-cur+1+v[i]-1);
        }
        cur=v[i];
    }
    cout<<cnt;
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