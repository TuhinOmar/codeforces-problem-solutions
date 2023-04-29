#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    lli w,h;cin>>w>>h;
    lli n,m,o,p;
    cin>>n;
    vector<lli>h1(n);
    for(auto&i:h1)cin>>i;
    cin>>m;
    vector<lli>h2(m);
    for(auto&i:h2)cin>>i;
    cin>>o;
    vector<lli>v1(o);
    for(auto&i:v1)cin>>i;
    cin>>p;
    vector<lli>v2(p);
    for(auto&i:v2)cin>>i;
    cout<<max({(h1[n-1]-h1[0])*h, (h2[m-1]-h2[0])*h, (v1[o-1]-v1[0])*w, (v2[p-1]-v2[0])*w})<<endl;

}

int32_t main(){
    IOS;
    
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    */
    
    
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}