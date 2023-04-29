#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

int32_t main(){
    IOS;
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    
    int t;cin>>t;
    while(t--){
        lli n;cin>>n;
        lli x,y;cin>>x>>y;
        lli mxSum = x*y;
        for(lli i=2;i<n;++i){
            cin>>x;
            mxSum=max(mxSum,y*x);
            y=x;
        }
        cout<<mxSum<<endl;
    }
    
    return 0;
}