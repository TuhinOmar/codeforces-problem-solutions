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
    int curMx=1;
    int mx=1;
    for(int i=1;i<n;++i){
        if(v[i]>=v[i-1]){
            ++curMx;
            if(mx<curMx){
                mx=curMx;
            }
        }else{
            curMx=1;
        }
    }
    cout<<mx;
}

int32_t main(){
    IOS;
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    
    
    solve();
    
    return 0;
}