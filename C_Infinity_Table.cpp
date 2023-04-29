#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    int k,r,c,cornar,top;cin>>k;
    r=ceil(sqrt(k));
    //cout<<r<<endl;
    top=(r*r-2*r+2);
    cornar=(2*r*r-2*r+2)/2;
    if(k>cornar)c=r*r-k+1;
    else{
        c=r;
        r=k-top+1;
    }
    cout<<r<<" "<<c<<endl;
}

int32_t main(){
    IOS;
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    
    
    int t;cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}